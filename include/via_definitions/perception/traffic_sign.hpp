#ifndef TRAFFIC_SIGN_H_
#define TRAFFIC_SIGN_H_

#include <vector>
#include <opencv2/opencv.hpp>

namespace via {
namespace definitions {
namespace perception {

struct TrafficSign {
  int sign_id;
  float confidence;
  cv::Rect2f box;
};

}  // namespace perception
}  // namespace definitions
}  // namespace via

#endif