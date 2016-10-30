#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  int factorial = 1;

  for (int i = 2; i <= n; ++i) {
    factorial *= i;
  }

  cout << n << "! = " << factorial << '\n';

  return 0;
}
