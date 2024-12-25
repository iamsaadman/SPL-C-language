#include<Stdio.h>

int main()
{
    int i,j;
    int A[10][10],transpose[10][10],row,col;

    printf("Enter rows and coloumns:");
    scanf("%d %d",&row,&col);


    if(A[i][j]!=transpose[i][j])
    {
        printf("Tranposing not possible.\n");
        return 0;
    }


    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");


    }
    printf("\n Before Transposing.\n");
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

            transpose[j][i] =A[i][j];
        }

        printf("\n");
    }
    printf("\n After Transposing.\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("%d ",transpose[i][j]);
        }

        printf("\n");
    }
}
