#include<stdio.h>
int main()
{
    printf("Enter three angle:");
    int a,b,c,sum=0;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;

    switch(a>0 && a<180 && b>0 && b<180 && c>0 && c<180 && sum==180)
    {

    case 1:
        printf("Valid angle");
        break;
    default:
        printf("Invalid angle");


    }
}
