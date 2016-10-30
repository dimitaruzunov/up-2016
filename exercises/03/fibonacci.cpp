#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  int current = 0;
  int next = 1;

  for (int i = 0; i < n; ++i) {
    int old_next = next;

    next = current + next;
    current = old_next;
  }

  cout << "fib(" << n << ") = " << current << '\n';

  return 0;
}
