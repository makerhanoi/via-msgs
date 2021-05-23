#ifndef VIA_MSG_DEFS_HPP_
#define VIA_MSG_DEFS_HPP_

#include <stdio.h>
#include <iostream>
#include <sensor_msgs/image_encodings.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/image.hpp>

namespace via_msgs {
namespace msg {

typedef sensor_msgs::msg::Image Image;
typedef sensor_msgs::msg::CameraInfo CameraInfo;

}  // namespace msg
}  // namespace via_msgs
#endif
