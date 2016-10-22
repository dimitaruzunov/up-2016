#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

/* Solves quadratic equation ax^2 + bx + c = 0 over the real numbers */
int main() {
  double a = 0;
  cout << "a = ";
  cin >> a;

  double b = 0;
  cout << "b = ";
  cin >> b;

  double c = 0;
  cout << "c = ";
  cin >> c;

  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        cout << "Every real x is a solution.\n";
      } else {
        cout << "No real roots.\n";
      }
    } else {
      cout << "x = " << -c / b << '\n';
    }
  } else {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
      cout << "No real roots.\n";
    } else if (discriminant == 0) {
      cout << "x1 = x2 = " << -b / (2 * a) << '\n';
    } else {
      cout << "x1 = " << (-b - sqrt(discriminant)) / (2 * a) << '\n';
      cout << "x2 = " << (-b + sqrt(discriminant)) / (2 * a) << '\n';
    }
  }

  return 0;
}
