#include "vision/vision_listener.hpp"

VisionListener::VisionListener(rclcpp::Node* node, char* multicast_ip, int multicast_port, char* inteface_name) : socketFD_(-1) {
    node_ = node;
    
    MULTICAST_IP = multicast_ip;
    MULTICAST_PORT = multicast_port;
    INTERFACE_NAME = inteface_name;
}

VisionListener::~VisionListener() {
    leaveGroup();
}



int VisionListener::startSocket() {
    if (socketFD_ > 0) {
        RCLCPP_WARN(node_->get_logger(), "Tried to open socket: socket already open");
        return 0;
    }

    RCLCPP_INFO(node_->get_logger(), "Opening socket");
    socketFD_ = socket(AF_INET, SOCK_DGRAM, 0);
    if (socketFD_ < 0) {
        RCLCPP_FATAL(node_->get_logger(), "failed to create socket: %s", strerror(errno));
        FORCE_CLOSE(socketFD_);
    }
    
    const int TRUE_FLAG = 1;
    PRINT_RES(this, setsockopt(socketFD_, SOL_SOCKET, SO_REUSEADDR, &TRUE_FLAG, sizeof(int)));
    if(test_ < 0){
        RCLCPP_FATAL(node_->get_logger(), "failed to set socket opt: %s", strerror(errno));
        FORCE_CLOSE(socketFD_);
    }

	memset(&serverAddr_, 0, sizeof(serverAddr_));
	serverAddr_.sin_family = AF_INET;
	serverAddr_.sin_port = htons(MULTICAST_PORT);
    serverAddr_.sin_addr.s_addr = htonl(INADDR_ANY);

    PRINT_RES(this, bind(socketFD_, (struct sockaddr *)&serverAddr_, sizeof(serverAddr_)));
	if(test_ < 0){
        RCLCPP_FATAL(node_->get_logger(), "Failed to bind socket: %s", strerror(errno));
        FORCE_CLOSE(socketFD_);
	}

    struct ip_mreqn group;
    memset(&group, 0, sizeof(group));
    group.imr_multiaddr.s_addr = inet_addr(MULTICAST_IP);
	group.imr_address.s_addr = htonl(INADDR_ANY);
    group.imr_ifindex          = if_nametoindex("wlo1");


    PRINT_RES(this, setsockopt(socketFD_, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char *)&group, sizeof(group)));
    if (test_ < 0) {
        RCLCPP_FATAL(node_->get_logger(), "failed setsockopt group: %s", strerror(errno));
        FORCE_CLOSE(socketFD_);
    }

    RCLCPP_INFO(node_->get_logger(), "Socket bound to: %s::%i", MULTICAST_IP, MULTICAST_PORT);
    return socketFD_;
}

int VisionListener::leaveGroup() {
    if (socketFD_ < 0) {
        RCLCPP_WARN(node_->get_logger(), "Socket is not open: %s", strerror(errno));
        return 0;
    }

    struct ip_mreqn group;
    memset(&group, 0, sizeof(group));
    group.imr_multiaddr.s_addr = inet_addr(MULTICAST_IP);
	// group.imr_address.s_addr = htonl(INADDR_ANY);
    group.imr_ifindex          = if_nametoindex("wlo1");

    PRINT_RES(this, setsockopt(socketFD_, IPPROTO_IP, IP_DROP_MEMBERSHIP, (char *)&group, sizeof(group)));
    if (test_ < 0) {
        RCLCPP_FATAL(node_->get_logger(), "setsockopt(IP_DROP_MEMBERSHIP) failed: %s", strerror(errno));
    }

    FORCE_CLOSE(socketFD_);

    return 1;
}

SSL_WrapperPacket VisionListener::receivePacket() {
    char buffer[BUF_SIZE];

    socklen_t addrlen = sizeof(serverAddr_);

    RCLCPP_INFO(node_->get_logger(), "Trying to receive datagrams");
    PRINT_RES(this, recvfrom(socketFD_, buffer, BUF_SIZE - 1, 0, (struct sockaddr*)&serverAddr_, &addrlen));
    int recvlen = test_;

    if (recvlen < 0) {
        RCLCPP_ERROR(node_->get_logger(), "recvfrom error: %s", strerror(errno));
        exit(1);
    }
    
    RCLCPP_INFO(node_->get_logger(), "Received %i bytes", recvlen);
    recievedPacket_.ParseFromArray(buffer, recvlen);

    return recievedPacket_;
}

SSL_WrapperPacket VisionListener::getPacket() {
    // newPacket_ = false;
    return this->recievedPacket_;
}

// TODO: Add new packet verification
// bool VisionListener::hasNewPacket() const {
  
//     return newPacket_;
// } 