#include <stdio.h>

int main()
{
    int n, i, a[100];

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
    printf("\nAfter deleting:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
