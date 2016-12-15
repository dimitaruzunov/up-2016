#include <iostream>

using std::cout;

const int MAX = 20;

void transpose(int matrix[][MAX], int m, int n) {
  int min = m < n ? m : n;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i < min && j < min && i < j) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      } else if (i >= min || j >= min) {
        matrix[j][i] = matrix[i][j];
      }
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

  transpose(matrix, 4, 2);

  print_matrix(matrix, 2, 4);

  return 0;
}
