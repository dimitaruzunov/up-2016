#include <iostream>

using std::cout;

const int MAX = 20;

void spiral_traversal(int matrix[][MAX], int rows, int cols) {
  int start_row = 0;
  int end_row = rows - 1;
  int start_column = 0;
  int end_column = cols - 1;

  while (start_row <= end_row && start_column <= end_column) {
    for (int i = start_column; i <= end_column; ++i) {
      cout << matrix[start_row][i] << ' ';
    }
    ++start_row;

    for (int i = start_row; i <= end_row; ++i) {
      cout << matrix[i][end_column] << ' ';
    }
    --end_column;

    if (start_row <= end_row) {
      for (int i = end_column; i >= start_column; --i) {
        cout << matrix[end_row][i] << ' ';
      }
      --end_row;
    }

    if (start_column <= end_column) {
      for (int i = end_row; i >= start_row; --i) {
        cout << matrix[i][start_column] << ' ';
      }
      ++start_column;
    }
  }
}

int main() {
  int matrix[MAX][MAX] = {
    {1, 2, 3, 4, 5, 6},
    {7, 8, 9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18}
  };

  spiral_traversal(matrix, 3, 6);

  return 0;
}
