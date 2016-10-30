#include <iostream>

using std::cout;
using std::cin;

int main() {
  int n;
  cout << "n = ";
  cin >> n;

  int odds_product = 1;

  for (int i = 1; i <= n; i += 2) {
    odds_product *= i;
  }

  cout << odds_product << '\n';

  return 0;
}
