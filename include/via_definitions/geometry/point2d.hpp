#ifndef POINT2D_H_
#define POINT2D_H_

namespace via {
namespace definitions {
namespace geometry {

template <typename T>
struct Point2D {
  T x;
  T y;
  Point2D(T x, T y) : x(x), y(y) {}
};

typedef Point2D<float> Point2f;
typedef Point2D<int> Point2i;

}  // namespace geometry
}  // namespace definitions
}  // namespace via

#endif