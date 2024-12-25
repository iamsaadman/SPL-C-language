#include<stdio.h>

int evenarray(int n)
{
    int i,arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }

    }
    return evenarray;
}

int main()
{

    int n;
    scanf("%d",&n); //n is for array length.
    evenarray(n);
    return 0;
}
