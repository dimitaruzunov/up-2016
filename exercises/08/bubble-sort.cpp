#include <iostream>

void bubble_sort(int array[], int length) {
  for (int i = 0; i < length - 1; ++i) {
    for (int j = length - 1; j > i; --j) {
      if (array[j] < array[j - 1]) {
        int temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
      }
    }
  }
}

void print(int array[], int length) {
  for (int i = 0; i < length; ++i) {
    std::cout << array[i] << ' ';
  }
  std::cout << '\n';
}

int main() {
  int array[] = {42, 3, 21, 10, 5};
  bubble_sort(array, 5);
  print(array, 5);

  return 0;
}
