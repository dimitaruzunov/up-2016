#include <iostream>

using std::cout;

double square(double x) {
  return x * x;
}

double fast_pow(double x, int n) {
  if (n < 0) {
    return 1 / fast_pow(x, -n);
  }
  if (n == 0) {
    return 1;
  }
  if (n % 2 == 0) {
    return square(fast_pow(x, n / 2));
  }

  return x * square(fast_pow(x, (n - 1) / 2));
}

int main() {
  cout << fast_pow(2, 10) << '\n';

  return 0;
}
