#include <stdio.h>

int main()
{

    int row, col, n;
    printf("Enter N=");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= n - row; col++)
        {
            printf("%d", col);
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--)
    {

        for (col = 1; col <= n - row; col++)
        {
            printf("%d", col);
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
