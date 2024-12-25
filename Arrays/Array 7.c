#include <stdio.h>

int main()
{
    int n, i, j, max_count = 0, max_num, curr_count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        curr_count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                curr_count++;
            }
            else
            {
                break;
            }
        }

        if (curr_count > max_count)
        {
            max_count = curr_count;
            max_num = arr[i];
        }
    }

    printf("The largest group of same number is %d with a size of %d.\n", max_num, max_count);

    return 0;
}
