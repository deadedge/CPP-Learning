#include "Point.hpp"

// Area A = [ x1(y2 - y3) + x2(y3 - y1) + x3(y1-y2)]/2
static float findArea(Point a, Point b, Point c)
{
  float area =
      ((a.getX() * (b.getY() - c.getY())) +
       (b.getX() * (c.getY() - a.getY())) +
       (c.getX() * (a.getY() - b.getY()))) /
      2;
  return area < 0 ? area * -1 : area;
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
  float A = findArea(a, b, c);
  float B = findArea(point, b, c);
  float C = findArea(point, a, b);
  float D = findArea(point, a, c);

  if (B == 0 || C == 0 || D == 0) // verify if is of top of a side of triangle
    return false;

  return ((B + C + D) == A);
}