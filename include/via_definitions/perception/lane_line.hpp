#ifndef LANE_LINE_H_
#define LANE_LINE_H_

#include <vector>
#include <opencv2/opencv.hpp>

namespace via {
namespace definitions {
namespace perception {

struct LaneLine {
  float confidence;
  int line_type;
  std::vector<cv::Point2f> points;
};

}  // namespace perception
}  // namespace definitions
}  // namespace via

#endif