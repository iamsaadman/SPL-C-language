#include <stdio.h>

int main() {
    int matrix[100][100], rows, cols, i, j, k, flag;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The common elements in all rows are: %d %d");
    for (i = 0; i < cols; i++) {
        flag = 1;
        for (j = 0; j < rows; j++) {
            for (k = j+1; k < rows; k++) {
                if (matrix[j][i] != matrix[k][i]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0) {
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", matrix[0][i]);
        }
    }

    return 0;
}
