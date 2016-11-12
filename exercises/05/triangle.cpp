#include <iostream>
#include <cmath>

using std::cout;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double perimeter(double x1, double y1,
                 double x2, double y2,
                 double x3, double y3) {
  return distance(x1, y1, x2, y2) +
         distance(x1, y1, x3, y3) +
         distance(x2, y2, x3, y3);
}

double area(double x1, double y1,
            double x2, double y2,
            double x3, double y3) {
  double semi_perimeter = perimeter(x1, y1, x2, y2, x3, y3) / 2;

  return sqrt(semi_perimeter *
              (semi_perimeter - distance(x1, y1, x2, y2)) *
              (semi_perimeter - distance(x1, y1, x3, y3)) *
              (semi_perimeter - distance(x2, y2, x3, y3)));
}

int main() {
  cout << perimeter(0, 0, 3, 0, 0, 4) << '\n';
  cout << area(0, 0, 4, 0, 0, 4) << '\n';

  return 0;
}
