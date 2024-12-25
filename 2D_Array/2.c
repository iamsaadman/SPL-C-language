#include<stdio.h>
int main()
{
    int num, i,sum=0,temp;


    printf("Enter any number: ");
    scanf("%d", &num);

    temp=num;

    while(temp!=0)
    {

i=temp%10;
sum=sum+i*i*i;
temp=temp/10;
    }


    if(num==sum)
        printf("%d is Armstrong Number.", num);
    else
        printf("%d is not a Armstrong Number.", num);
    return 0;
}
