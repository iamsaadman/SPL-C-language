#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array in reverse order are:\n");
    for (i = n-1 ; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
