#include <iostream>

using std::cout;

double pow(double x, int n, double result) {
  if (n == 0) {
    return result;
  }

  return pow(x, n - 1, result * x);
}

double pow(double x, int n) {
  if (n < 0) {
    return 1 / pow(x, -n, 1);
  }

  return pow(x, n, 1);
}

int main() {
  cout << pow(2, 10) << '\n';

  return 0;
}
