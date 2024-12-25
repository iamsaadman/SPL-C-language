#include<stdio.h>

int factorial(int n)
{

    int fact=1,i;

    for(i=n; i>=1; i--)
    {
        fact=fact*i;


    }
    printf("%d",fact);
    return factorial;
}

int main()
{
    int n;

    scanf("%d",&n);

    factorial(n);

    return 0;

}
