#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i, j, n;

    // Get the order of the matrix from user
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    // Get the elements of the matrix from user
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the main diagonal of the matrix
    printf("The main diagonal of the matrix is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // Print the secondary diagonal of the matrix
    printf("The secondary diagonal of the matrix is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][n-i-1]);
    }
    printf("\n");

    return 0;
}
