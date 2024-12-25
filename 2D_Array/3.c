#include <stdio.h>



int main()
{
    int rows,cols,arr[rows][cols],i,j,k,temp;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

   int sum[cols]={0};
    // Calculate column-wise sum
    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            sum[j] += arr[i][j];
        }
    }

    // Sort array based on column-wise sum
    for (i = 0; i < cols; i++) {
        for (j = i+1; j < cols; j++) {
            if (sum[i] > sum[j]) {
                // Swap columns
                for ( k = 0; k < rows; k++) {
                    temp = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = temp;
                }
                // Swap column-wise sum
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted 2D array based on column-wise sum:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
