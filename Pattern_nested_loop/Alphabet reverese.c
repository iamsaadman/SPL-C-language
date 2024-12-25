#include<stdio.h>

int main()
{
    int n,row,col;

    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=row; col>=1; col--)
        {
            printf("%c ",col+64);

        }
        printf("\n");
    }
}
