#include <stdio.h>

int main()
{

    int size, i, j, temp, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Updated Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
