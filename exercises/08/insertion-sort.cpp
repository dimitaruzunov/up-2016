#include <iostream>

void insertion_sort(int array[], int length) {
  for (int i = 1; i < length; ++i) {
    int next = array[i];
    int j = i;
    while (j > 0 && array[j - 1] > next) {
      array[j] = array[j - 1];
      --j;
    }
    array[j] = next;
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
  insertion_sort(array, 5);
  print(array, 5);

  return 0;
}
