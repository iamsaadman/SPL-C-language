#include <stdio.h>

int main() {
    int n, i, j, sum, row_sum, col_sum, diag1_sum = 0, diag2_sum = 0;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    // read the matrix from the user
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // calculate the sum of the first row to use as a baseline for comparison
    for (j = 0, sum = 0; j < n; j++) {
        sum += matrix[0][j];
    }

    // check if all the rows, columns, and diagonals have the same sum
    for (i = 0; i < n; i++) {
        // check row i
        for (j = 0, row_sum = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum != sum) {
            printf("Not a magic square\n");
            return 0;
        }

        // check column i
        for (j = 0, col_sum = 0; j < n; j++) {
            col_sum += matrix[j][i];
        }
        if (col_sum != sum) {
            printf("Not a magic square\n");
            return 0;
        }

        // check diagonal 1 (top-left to bottom-right)
        diag1_sum += matrix[i][i];

        // check diagonal 2 (top-right to bottom-left)
        diag2_sum += matrix[i][n-i-1];
    }

    if (diag1_sum != sum || diag2_sum != sum) {
        printf("Not a magic square\n");
        return 0;
    }

    printf("It's a magic square!\n");
    return 0;
}
