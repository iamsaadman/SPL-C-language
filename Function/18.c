#include<stdio.h>

int IsPrime()
{
    int n,i,flag=0;

    if(n==0||n==1)
        flag=1;

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime",n);
    }
    else
    {
        printf("Not prime",n);
    }
    return IsPrime;
}

int main()
{

    int n;
    scanf("%d",&n);

    IsPrime(n);

    return 0;
}
