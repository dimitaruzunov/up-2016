#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    cout << i << '\n';
  }

  return 0;
}
