#include <iostream>
#include <cmath>

/* Solves quadratic equation ax^2 + bx + c = 0 over the real numbers */
int main() {
  double a = 0;
  std::cout << "a = ";
  std::cin >> a;

  double b = 0;
  std::cout << "b = ";
  std::cin >> b;

  double c = 0;
  std::cout << "c = ";
  std::cin >> c;

  double discriminant = b * b - 4 * a * c;

  if (discriminant < 0) {
    std::cout << "No real roots.\n";
  } else if (discriminant == 0) {
    std::cout << "x1 = x2 = " << -b / (2 * a) << '\n';
  } else {
    std::cout << "x1 = " << (-b - sqrt(discriminant)) / (2 * a) << '\n';
    std::cout << "x2 = " << (-b + sqrt(discriminant)) / (2 * a) << '\n';
  }

  return 0;
}