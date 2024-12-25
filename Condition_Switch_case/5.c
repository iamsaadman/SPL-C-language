#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);

    switch((n !=0) && ((n&(n-1))==0))
    {
        case 1:printf("Yes");
        break;
        default: printf("No");
        break;
    }

    return 0;
    }
