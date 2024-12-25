#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i, j, n, trace = 0;

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

    // Calculate the trace of the matrix
    for (i = 0; i < n; i++)
    {
        trace += matrix[i][i];
    }

    // Print the trace of the matrix
    printf("The trace of the matrix is: %d", trace);

    return 0;
}
