#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, a[100], number, position;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("Enter the index position of the array: ");
    scanf("%d", &position);

    printf("Enter the number at the any position of the array: ");
    scanf("%d", &number);

    for (i = n; i >= position; i--)
    {

        a[i] = a[i - 1];
    }
    a[position] = number;
    n++;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
