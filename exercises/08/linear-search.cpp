#include <iostream>

int linear_search(int element, int array[], int length) {
  for (int i = 0; i < length; ++i) {
    if (array[i] == element) {
      return i;
    }
  }

  return -1;
}

int main() {
  int array[] = {5, 3, 42, 21, 10};
  std::cout << linear_search(42, array, 5) << '\n';

  return 0;
}
