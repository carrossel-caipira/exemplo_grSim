#ifndef VISION_SUBSCRIBER_HPP
#define VISION_SUBSCRIBER_HPP

#pragma once

#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h> 

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "ssl_vision_wrapper.pb.h"
#include "grSim_Packet.pb.h"

#include "data_sender.hpp"

using namespace std::chrono_literals;
// using namespace std::placeholders;

class VisionSubscriber : public rclcpp::Node
{
public:
    VisionSubscriber();
 
private:
    // const int SOCKETBUFFERSIZE_ = 1024 * 4; // 4KB
    struct sockaddr_in grsim_addr;
    std::shared_ptr<DataSender> grSimSender_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr loopControl_;

    std::string processPacket(SSL_WrapperPacket msg);
    void topic_callback(/*const std_msgs::msg::String & msg*/);
};

#endif // VISION_SUBSCRIBER_HPP