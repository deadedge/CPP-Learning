#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
int main(void)
{
  Point point(2, 2);
  Point a(0, 0);
  Point b(6, 0);
  Point c(0, 6);
  std::cout << "Esta dentro? " << (point.bsp(a, b, c, point) ? "Sim" : "Nao") << std::endl;

  return 0;
}