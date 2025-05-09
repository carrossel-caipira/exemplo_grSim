cmake_minimum_required(VERSION 3.8)
project(vision)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake  REQUIRED)
find_package(rclcpp       REQUIRED)
find_package(std_msgs     REQUIRED)

find_package(shared_proto REQUIRED) # proto compiled files

include_directories(
  include
  ${shared_proto_INCLUDE_DIRS}
)

set(SOURCES
  src/node_receiver.cpp
  src/vision_publisher.cpp
  src/vision_listener.cpp
)

add_executable(node_receiver ${SOURCES})

target_link_libraries(node_receiver
  shared_proto::shared_proto_msgs
)

ament_target_dependencies(node_receiver
  rclcpp
  std_msgs
  shared_proto
)


install(TARGETS node_receiver
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
