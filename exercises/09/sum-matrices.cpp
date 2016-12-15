#include <iostream>

using std::cout;

const int MAX = 20;

void sum_matrices(int first_matrix[][MAX], int second_matrix[][MAX],
                  int m, int n, int result_matrix[][MAX]) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      result_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
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
  int first_matrix[MAX][MAX] = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
  };

  int second_matrix[MAX][MAX] = {
    {2, 3},
    {4, 5},
    {6, 7},
    {8, 9}
  };

  int result_matrix[MAX][MAX];

  sum_matrices(first_matrix, second_matrix, 4, 2, result_matrix);

  print_matrix(result_matrix, 4, 2);

  return 0;
}
