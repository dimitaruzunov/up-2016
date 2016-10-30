#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  int sum = 0;

  for (int i = 1; i <= n; ++i) {
    sum += i;
  }

  cout << sum << '\n';

  return 0;
}
