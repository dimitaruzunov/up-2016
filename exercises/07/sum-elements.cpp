#include <iostream>

int sum_elements(int array[], int length) {
  int sum = 0;

  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }

  return sum;
}

int sum_elements_rec(int array[], int length) {
  if (length == 0) {
    return 0;
  }

  return array[0] + sum_elements_rec(array + 1, length - 1);
}

int main() {
  int array[] = {42, 3, 21, 10, 5};

  std::cout << sum_elements(array, 5) << '\n';
  std::cout << sum_elements_rec(array, 5) << '\n';

  return 0;
}
