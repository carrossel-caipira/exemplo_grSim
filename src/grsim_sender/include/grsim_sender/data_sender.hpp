#ifndef DATA_SENDER_HPP
#define DATA_SENDER_HPP

#pragma once

#include <sys/socket.h>
#include <net/if.h>
#include <sys/un.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/udp.h>
#include <arpa/inet.h>

#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "ssl_vision_wrapper.pb.h"

class DataSender {
public:
    DataSender(rclcpp::Node* node, char* multicast_ip, int multicast_port, char* inteface_name);
    ~DataSender();

    int startSocket();
    int closeSocket();
    int sendPacket(const char* buffer_data, size_t buffer_size);
private:
    // const int SOCKETBUFFERSIZE_ = 1024 * 4; // 4KB
    char* UNICAST_IP;
    int UNICAST_PORT;
    char* INTERFACE_NAME;

    SSL_WrapperPacket recievedPacket_;
    struct sockaddr_in grsimAddr_;
    int socketFD_;

    rclcpp::Node* node_;
};

#endif // DATA_SENDER_HPP