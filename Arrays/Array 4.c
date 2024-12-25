#include <stdio.h>

int main()
{
    int n, i, a[100], position;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }

    printf("\nEnter any index position for deleting: ");
    scanf("%d", &position);

    for (i = position; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("\nAfter deleting:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
