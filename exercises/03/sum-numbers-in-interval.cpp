#include <iostream>

using std::cout;
using std::cin;

int main() {
  int start = 0;
  cout << "start = ";
  cin >> start;

  int end = 0;
  cout << "end = ";
  cin >> end;

  int sum = 0;

  for (int i = start; i <= end; ++i) {
    sum += i;
  }

  cout << sum << '\n';

  return 0;
}
