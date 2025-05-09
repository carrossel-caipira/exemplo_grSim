#include <grsim_sender/data_sender.hpp>

DataSender::DataSender(rclcpp::Node* node, char* unicast_ip, int unicast_port, char* inteface_name) : socketFD_(-1) {
    node_ = node;
    
    UNICAST_IP = unicast_ip;
    UNICAST_PORT = unicast_port;
    INTERFACE_NAME = inteface_name;
}

DataSender::~DataSender() {
    closeSocket();
}

int DataSender::startSocket() {
    if (socketFD_ > 0) {
        RCLCPP_WARN(node_->get_logger(), "Tried to open socket: socket already open");
        return 0;
    }

    RCLCPP_INFO(node_->get_logger(), "Opening socket");
    socketFD_ = socket(AF_INET, SOCK_DGRAM, 0);
    if (socketFD_ < 0) {
        RCLCPP_FATAL(node_->get_logger(), "failed to create socket");
        return -1;
    }

    memset(&grsimAddr_, 0, sizeof(grsimAddr_));
    grsimAddr_.sin_family = AF_INET;
    grsimAddr_.sin_port = htons(20011);
    inet_pton(AF_INET, "127.0.0.1", &grsimAddr_.sin_addr); 

    return 0;
}

int DataSender::closeSocket() {
    if (socketFD_ < 0) {
        RCLCPP_WARN(node_->get_logger(), "Socket is not open");
        return 0;
    }

    close(socketFD_);
    socketFD_ = -1;
    return 0;
}

int DataSender::sendPacket(const char* buffer_data, size_t buffer_size) {
    RCLCPP_DEBUG(node_->get_logger(), "Trying to receive packet");
    RCLCPP_DEBUG(node_->get_logger(), "buf size: %li", sizeof(buffer_data));

        
    ssize_t sent = sendto(socketFD_, buffer_data, buffer_size, 0, (struct sockaddr*)&grsimAddr_, sizeof(grsimAddr_));
    if (sent < 0) {
        RCLCPP_WARN_ONCE(node_->get_logger(), "sendto failed");
        return -1;
    }

    RCLCPP_WARN_ONCE(node_->get_logger(), "sendto failed");
    return 0;

    // char buffer[SOCKETBUFFERSIZE_];
    
    // socklen_t addrlen = sizeof(serverAddr_);
    
    // int recvlen = recvfrom(socketFD_, buffer, SOCKETBUFFERSIZE_ - 1, 0, (struct sockaddr*)&serverAddr_, &addrlen);
    // if (recvlen < 0) {
    //     RCLCPP_WARN(node_->get_logger(), "recvfrom error");
    //     exit(1);
    // }
    
    // RCLCPP_INFO(node_->get_logger(), "Received %i bytes", recvlen);
    // recievedPacket_.ParseFromArray(buffer, recvlen);
}