#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  double sum = 0;

  for (int i = 1; i <= n; ++i) {
    double product = 1;
    for (int j = 0; j < n; ++j) {
      product *= 1.0 / i;
    }

    sum += product;
  }

  cout << sum << '\n';

  return 0;
}
