#include "vision/vision_publisher.hpp"
#include <iostream>

VisionPublisher::VisionPublisher() 
: Node("node_receiver") {
    RCLCPP_INFO(this->get_logger(), "Starting Vision");

    auto ip_desc = rcl_interfaces::msg::ParameterDescriptor{};
    ip_desc.read_only = true;
    ip_desc.description = "IP for multicast connection between vision listener and SSL softwares";

    this->declare_parameter("IP multicast", "224.5.23.2", ip_desc);

    auto port_desc = rcl_interfaces::msg::ParameterDescriptor{};
    port_desc.read_only = true;
    port_desc.description = "PORT for multicast connection between vision listener and SSL softwares";

    this->declare_parameter("PORT multicast", 10020, port_desc);

    auto interface_desc = rcl_interfaces::msg::ParameterDescriptor{};
    interface_desc.read_only = true;
    interface_desc.description = "Inteface for multicast connection between vision listener and SSL softwares, run \'ip a\' for fiding the interface name";

    this->declare_parameter("Multicast interface name", "wlo1", interface_desc);
    
    
    this->get_parameter("IP multicast", multicast_ip_);
    this->get_parameter("PORT multicast", multicast_port_);
    this->get_parameter("Multicast interface name", interface_name_);


    char* mutable_cstr_ip = new char[multicast_ip_.size() + 1];
    std::strcpy(mutable_cstr_ip, multicast_ip_.c_str());

    char* mutable_cstr_interface = new char[interface_name_.size() + 1];
    std::strcpy(mutable_cstr_interface, interface_name_.c_str());

    dataReceiver_ = std::make_shared<VisionListener>(
        this, 
        mutable_cstr_ip, 
        multicast_port_,
        mutable_cstr_interface
    );
    
    int socketStatus = dataReceiver_->startSocket(); 
    RCLCPP_WARN(this->get_logger(), "Socket status: %s", socketStatus > 0 ? "open" : "error");
    if (socketStatus > 0) {  
        publisher_ = this->create_publisher<std_msgs::msg::String>("ssl_frame", 10);
        
        int delay_ms = 1000.0 / (double)FRAMERATE_;
        auto delay_duration = std::chrono::milliseconds(delay_ms);
        
        RCLCPP_WARN(this->get_logger(), "Starting timer");
        // TODO: search for better loop handling
        loopControl_ = this->create_wall_timer(
            delay_duration, 
            std::bind(&VisionPublisher::loopCallback, this)
        );
    }
}

void VisionPublisher::publishMessage() {
    RCLCPP_DEBUG(this->get_logger(), "Publishing message to topic");
    if (message_.data == "NULL") {
        return;
    }
    
    RCLCPP_DEBUG(this->get_logger(), "Publishing: '%s'", message_.data.c_str());
    publisher_->publish(message_); 
}

std_msgs::msg::String VisionPublisher::getSerializedData() {
    std_msgs::msg::String msg;
    std::string serializedData;

    msg.data = "NULL";

    SSL_WrapperPacket receivedPacket = dataReceiver_->receivePacket();

    if (!receivedPacket.SerializeToString(&serializedData)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to serialize SSL_WrapperPacket");
        return msg;
    }
    
    printPacket(receivedPacket);

    msg.data = serializedData;
    return msg;
}
    
void VisionPublisher::loopCallback() {
    RCLCPP_INFO_ONCE(this->get_logger(), "Vision started successfuly");
    
    // TODO
    // if (!dataReceiver_->hasNewPacket()) {
    //     RCLCPP_INFO(this->get_logger(), "No packet detected");
    //     return;
    // }    
    
    message_ = this->getSerializedData();
    
    this->publishMessage();
}

void VisionPublisher::printPacket(const SSL_WrapperPacket packet) {

    if (packet.has_detection()) {
        SSL_DetectionFrame detection = packet.detection();
        for (int i = 0; i < detection.balls_size(); i++) {
            SSL_DetectionBall visionBall = detection.balls(i);
            RCLCPP_INFO(this->get_logger(),"oBall: %f %f %f\n", visionBall.x(), visionBall.y(), visionBall.z());
        
        }
        for (int i = 0; i < detection.robots_blue_size(); i++) {
            SSL_DetectionRobot robot = detection.robots_blue(i);
            RCLCPP_INFO(this->get_logger(),"Robot Blue: %f %f %f\n", robot.x(), robot.y(), robot.orientation());
        }
        for (int i = 0; i < detection.robots_yellow_size(); i++) {
            SSL_DetectionRobot robot = detection.robots_yellow(i);
            RCLCPP_INFO(this->get_logger(),"Robot Yellow: %f %f %f\n", robot.x(), robot.y(), robot.orientation());
        }
    }
}