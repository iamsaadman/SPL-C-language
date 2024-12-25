#include <stdio.h>

int main() {
  int m, n, i, j;
  scanf("%d %d", &m, &n);

  // Initialize the matrix A
  int A[m][n];
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  // Iterate over the matrix A
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (A[i][j] == 1) {
        // Set all cells in row i to 1
        for (int k = 0; k < n; k++) {
          A[i][k] = 1;
        }
        // Set all cells in column j to 1
        for (int k = 0; k < m; k++) {
          A[k][j] = 1;
        }
      }
    }
  }

  // Print the modified matrix A
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
