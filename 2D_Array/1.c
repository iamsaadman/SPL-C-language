#include<stdio.h>

int main()
{

    int A[100][100],i,j,row,col,sum=0;
    float average[i];
    printf("Enter Rows and Columns:");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            sum+=A[i][j];

        }
        average[i]=sum/col;

    }
    for(i=0; i<row; i++)
    {

        printf("Average of 2D array: %.2f",i+1,average[i]);
    }

    return 0;
}
