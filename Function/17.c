#include<stdio.h>

int sorting(int n)
{
    int i,j,temp,arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return sorting;
}

int main()
{
    int n;
    scanf("%d",&n);
    sorting(n);

    return 0;
}
