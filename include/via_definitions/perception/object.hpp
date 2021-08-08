#ifndef OBJECT_H_
#define OBJECT_H_

#include <vector>
#include <opencv2/opencv.hpp>

namespace via {
namespace definitions {
namespace perception {

struct Object {
  int class_id;
  float confidence;
  cv::Rect2f box;
};

}  // namespace perception
}  // namespace definitions
}  // namespace via

#endif