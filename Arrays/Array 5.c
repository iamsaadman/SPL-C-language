#include <stdio.h>

int main()
{
    int n, i, j = 0, a[100], position;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = a[n - 1];
    for (i = 0; i < j + 1; i++)
    {
        printf("%d ", a[i]);
    }
}
