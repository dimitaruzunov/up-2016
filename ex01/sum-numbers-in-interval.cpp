#include <iostream>

/* Finds the sum of integers in a given interval [start, end] */
int main() {
  int start = 0;
  std::cout << "start = ";
  std::cin >> start;

  int end = 0;
  std::cout << "end = ";
  std::cin >> end;

  int sum = 0;
  for (int i = start; i <= end; ++i) {
    sum += i;
  }

  std::cout << "sum = " << sum << '\n';

  return 0;
}