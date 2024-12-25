#include <stdio.h>
#include <conio.h>

int main()
{
    int row, n, col;
    printf("enter value of n=");
    scanf("%d", &n);
    printf("\n\n");
    for (row = 1; row < n; row++)
    {
        for (col = 1; col < n; col++)
        {
            if (row <= n / 2 && (row == col || row + col == n - 1) || (row > n / 2 && col == n / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
