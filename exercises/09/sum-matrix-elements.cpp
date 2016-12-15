#include <iostream>

const int MAX = 20;

int sum_elements(int matrix[][MAX], int m, int n) {
  int sum = 0;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      sum += matrix[i][j];
    }
  }

  return sum;
}

int main() {
  int matrix[MAX][MAX] = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
  };

  std::cout << sum_elements(matrix, 4, 2) << '\n';

  return 0;
}
