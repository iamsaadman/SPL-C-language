#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is skew-symmetric
    int isSkewSymmetric = 1; // assume it's skew-symmetric
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != -matrix[j][i])
            {
                isSkewSymmetric = 0; // not skew-symmetric
                break;
            }
        }
        if (!isSkewSymmetric)
        {
            break;
        }
    }

    // Print the result
    if (isSkewSymmetric)
    {
        printf("The matrix is skew-symmetric.\n");
    }
    else
    {
        printf("The matrix is not skew-symmetric.\n");
    }

    return 0;
}
