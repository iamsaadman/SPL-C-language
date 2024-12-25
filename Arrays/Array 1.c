#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a[100], beginning_number;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("Enter the number at the begnning of the array: ");
    scanf("%d", &beginning_number);

    n++;

    for (i = n; i > 1; i--)
    {

        a[i - 1] = a[i - 2];
    }
    a[0] = beginning_number;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
