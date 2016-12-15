#include <iostream>

using std::cout;

const int MAX = 20;

void scalar_multiplication(int matrix[][MAX], int m, int n, int lambda) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      matrix[i][j] *= lambda;
    }
  }
}

void print_matrix(int matrix[][MAX], int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << matrix[i][j] << ' ';
    }
    cout << '\n';
  }
}

int main() {
  int matrix[MAX][MAX] = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
  };

  scalar_multiplication(matrix, 4, 2, 2);

  print_matrix(matrix, 4, 2);

  return 0;
}
