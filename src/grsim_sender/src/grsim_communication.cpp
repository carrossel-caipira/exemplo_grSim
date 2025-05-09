#include "grsim_sender/vision_subscriber.hpp"
#include <string>

int main(int argc, char * argv[])
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    rclcpp::init(argc, argv);    
    rclcpp::spin(std::make_shared<VisionSubscriber>());
    rclcpp::shutdown();
    
    return 0;
}