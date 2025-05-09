#ifndef VISION_LISTENER_HPP
#define VISION_LISTENER_HPP

#pragma once

#include <sys/socket.h>
#include <net/if.h>
#include <sys/un.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/udp.h>
#include <arpa/inet.h>
#include <fcntl.h>

#include <string>
#include "vision_listener.hpp"

#include "rclcpp/rclcpp.hpp"

#include "ssl_vision_wrapper.pb.h"

#define BUF_SIZE 1024 * 4 // 4 Kb

#define FORCE_CLOSE(sock) \
    close(sock); sock = -1; return socketFD_

#define PRINT_RES(instance, f) \
    instance->test_ = f; \
    RCLCPP_WARN(instance->node_->get_logger(), "%s: %i", #f, instance->test_)

class VisionListener {
public:
    VisionListener(rclcpp::Node* node, char* multicast_ip, int multicast_port, char* inteface_name);
    ~VisionListener();

    int startSocket();
    int leaveGroup();
    SSL_WrapperPacket receivePacket();
    
    SSL_WrapperPacket getPacket();
    // TODO: Add new packet verification
    // bool hasNewPacket() const;
private:
    char* MULTICAST_IP;
    int MULTICAST_PORT;
    char* INTERFACE_NAME;
    
    
    bool newPacket_;
    SSL_WrapperPacket recievedPacket_;
    struct sockaddr_in serverAddr_;
    int socketFD_;
    int test_;

    rclcpp::Node* node_;

};

#endif
