#ifndef VISION_PUBLISHER_HPP
#define VISION_PUBLISHER_HPP

#pragma once

#include <string>
#include <chrono>
#include "vision_listener.hpp"

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "ssl_vision_wrapper.pb.h"
#include "ssl_vision_detection.pb.h"
#include "ssl_vision_geometry.pb.h"


// using namespace std::chrono_literals;

class VisionPublisher : public rclcpp::Node {
public:
    VisionPublisher();

    void printPacket(const SSL_WrapperPacket packet);
private:
    const int FRAMERATE_ = 60;

    void publishMessage();
    std_msgs::msg::String getSerializedData();
    void loopCallback();

    rclcpp::TimerBase::SharedPtr loopControl_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    std_msgs::msg::String message_;   
    std::shared_ptr<VisionListener> dataReceiver_;

    std::string multicast_ip_;
    int multicast_port_;
    std::string interface_name_;
};

#endif
