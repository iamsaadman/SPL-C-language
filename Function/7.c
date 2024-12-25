#include<stdio.h>

int calculatesum(int n)
{
    int i,num,sum=0;

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    return sum;

}

int main()
{

    int n;
    scanf("%d",&n);
    int sum=calculatesum(n);

    printf("Sum in Function:%d\nSum in Main:%d\n",sum,sum);
    return 0;
}
