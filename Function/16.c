#include<stdio.h>

int multiplyarray(int n)
{
    int i,arr[n],multiplyvalue;

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
      multiplyvalue=arr[i]*2;
      printf("%d ",multiplyvalue);
    }

    return multiplyarray;
}

int main()
{

    int n;
    scanf("%d",&n); //n is for array length.

    multiplyarray(n);

    return 0;
}
