#include <grsim_sender/vision_subscriber.hpp>


VisionSubscriber::VisionSubscriber() 
: Node("grsim_sender") {
    RCLCPP_INFO(this->get_logger(), "Starting communication with grSim");

    char* grsim_ip = "224.5.23.2";
    int grsim_command_port = 20011;
    char* interface_name = "wlo1";

    grSimSender_ =  std::make_shared<DataSender>(this, grsim_ip, grsim_command_port, interface_name);
    if(grSimSender_->startSocket() < 0) {
        return;
    }

    // subscription_ = this->create_subscription<std_msgs::msg::String>( 
    //     "ssl_frame",
    //     10,
    //     std::bind(&VisionSubscriber::topic_callback, this, _1)
    // );

    std_msgs::msg::String msg();

    loopControl_ = this->create_wall_timer(
        2ms,
        std::bind(&VisionSubscriber::topic_callback, this)
    );
}

std::string VisionSubscriber::processPacket(SSL_WrapperPacket msg) {
    grSim_Packet packet;
    grSim_Commands* command = packet.mutable_commands();
    command->set_timestamp(0.0);
    command->set_isteamyellow(false);  // Set to false for blue team

    // Add a robot command
    grSim_Robot_Command* robot_command = command->add_robot_commands();
    robot_command->set_id(0);  // Robot ID
    
    robot_command->set_wheelsspeed(false);
    robot_command->set_wheel1(0);
    robot_command->set_wheel2(0);
    robot_command->set_wheel3(0);
    robot_command->set_wheel4(0);

    robot_command->set_veltangent(5.0); 
    robot_command->set_velnormal(0.0);  
    robot_command->set_velangular(0.0); 

    robot_command->set_kickspeedx(0);  
    robot_command->set_kickspeedz(0); 
    robot_command->set_spinner(false); 

    std::string data;
    packet.SerializeToString(&data);
    
    return data;
}

void VisionSubscriber::topic_callback(/*const std_msgs::msg::String &msg*/){
    RCLCPP_INFO_ONCE(this->get_logger(), "Communication with grSim started successfuly");
    
    // RCLCPP_DEBUG(this->get_logger(), "Got message from topic: %s", msg.data.c_str());
    SSL_WrapperPacket visionData;
    // std_msgs::msg::String msg;
    

    // if(!visionData.ParseFromString(msg.data)) {
    //     RCLCPP_WARN(this->get_logger(), "Incapable to parse message");        
    //     return;
    // }

    // RCLCPP_DEBUG(this->get_logger(), "Sending message to grSim: %s", msg.data.c_str());
    std::string buffer_data = processPacket(visionData);
    grSimSender_->sendPacket(buffer_data.c_str(), buffer_data.size());

}
