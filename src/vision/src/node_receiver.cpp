#include "vision/vision_publisher.hpp"
#include <string>

int main(int argc, char * argv[])
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    rclcpp::init(argc, argv);    
    rclcpp::spin(std::make_shared<VisionPublisher>());
    rclcpp::shutdown();
    
    return 0;
}