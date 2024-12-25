#include <stdio.h>

int main()
{
    int n, i, j = 0, k, a[100], position;

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
        for (k = 2; k <= i / 2; k++)
        {
            if (a[i] % k == 0)
            {
                printf("%d ", a[i]);
            }
        }
    }
}
