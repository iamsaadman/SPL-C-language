#include<stdio.h>

int minimumvaluearray(int n)
{
    int i,arr[n],min=arr[0];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nMinimum Value: %d\n",min);
    return minimumvaluearray;
}

int main()
{

    int n;
    scanf("%d",&n); //n is for array length.

    minimumvaluearray(n);

    return 0;
}
