#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);

    switch((year%4==0 && year%100 !=0) ||(year%400==0))
    {
    case 1:
        printf("yes");
        break;
    default:
        printf("no");
        break;
    }
    return 0;
}
