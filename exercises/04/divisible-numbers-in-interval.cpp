#include <iostream>

using std::cout;
using std::cin;

int main() {
  int start;
  cout << "start = ";
  cin >> start;

  int end;
  cout << "end = ";
  cin >> end;

  int divisor;
  cout << "divisor = ";
  cin >> divisor;

  for (int i = start; i <= end; ++i) {
    if (i % divisor == 0) {
      cout << i << '\n';
    }
  }

  return 0;
}
