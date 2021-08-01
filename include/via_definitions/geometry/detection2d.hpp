#ifndef DETECTION2D_H_
#define DETECTION2D_H_

#include <via_definitions/geometry/box2d.h>

namespace via {
namespace definitions {
namespace geometry {

template <typename T>  // Data type for bounding box
struct Detection2D {
  Box2D<T> box;
  Detection2D(T x, T y, T w, T h, int class_id)
      : box(Box2D<t>(x, y, w, h)), class_id(class_id) {}
  Detection2D(Box2D<T> box, int class_id) : box(box), class_id(class_id){};
};

typedef Detection2D<float> Detection2Df;
typedef Detection2D<int> Detection2Di;

}  // namespace geometry
}  // namespace definitions
}  // namespace via

#endif