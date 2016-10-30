#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  int evens_sum = 0;

  for (int i = 2; i <= n; i += 2) {
    evens_sum += i;
  }

  cout << evens_sum << '\n';

  return 0;
}
