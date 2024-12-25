#include<stdio.h>

int reverseorder(int n)
{

    int arr[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return reverseorder;

}



int main()
{

    int n;
    scanf("%d",&n);

    reverseorder(n);


    return 0;
}
