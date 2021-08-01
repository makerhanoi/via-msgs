#ifndef BOX2D_H_
#define BOX2D_H_

namespace via {
namespace definitions {
namespace geometry {

template <typename T>
struct Box2D {
  T x;
  T y;
  T w;
  T h;
  Box2D(T x, T y, T w, T h) : x(x), y(y), w(w), h(h) {}
};

typedef Box2f<float> Box2Df;
typedef Box2i<int> i;

}  // namespace geometry
}  // namespace definitions
}  // namespace via

#endif