#include <stdio.h>

#define ROWS 4
#define COLS 4

int main()
{
    int arr[ROWS][COLS] = {{1, 2, 3,4},
                           {5, 6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}};

    int i, j, k = 0, l = 0;

    while (k < ROWS && l < COLS)
    {
        for (i = l; i < COLS; i++)
        {
            printf("%d ", arr[k][i]);
        }
        k++;

        for (i = k; i < ROWS; i++)
        {
            printf("%d ", arr[i][COLS-1]);
        }
        COLS--;

        if (k < ROWS)
        {
            for (i = COLS-1; i >= l; i--)
            {
                printf("%d ", arr[ROWS-1][i]);
            }
            ROWS--;
        }

        if (l < COLS)
        {
            for (i = ROWS-1; i >= k; i--)
            {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }

    return 0;
}
