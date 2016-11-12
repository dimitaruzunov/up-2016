#include <iostream>

using std::cout;
using std::cin;

int factorial(int n) {
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  cout << n << "! = " << factorial(n) << '\n';

  return 0;
}

