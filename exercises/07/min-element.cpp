#include <iostream>

int min_element(int array[], int length) {
  int index_of_min = 0;

  for (int i = 1; i < length; ++i) {
    if (array[i] < array[index_of_min]) {
      index_of_min = i;
    }
  }

  return array[index_of_min];
}

int min(int x, int y) {
  return x < y ? x : y;
}

int min_element_rec(int array[], int length) {
  if (length == 1) {
    return array[0];
  }

  return min(array[0], min_element_rec(array + 1, length - 1));
}

int main() {
  int array[] = {42, 3, 21, 10, 5};

  std::cout << min_element(array, 5) << '\n';
  std::cout << min_element_rec(array, 5) << '\n';

  return 0;
}
