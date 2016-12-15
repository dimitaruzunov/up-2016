#include <iostream>

void selection_sort(int array[], int length) {
  for (int i = 0; i < length - 1; ++i) {
    int index_of_min = i;

    for (int j = i + 1; j < length; ++j) {
      if (array[j] < array[index_of_min]) {
        index_of_min = j;
      }
    }

    int temp = array[i];
    array[i] = array[index_of_min];
    array[index_of_min] = temp;
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
  selection_sort(array, 5);
  print(array, 5);

  return 0;
}