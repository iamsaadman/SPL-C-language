#include<stdio.h>

int power(int x,int y)
{
    int power = pow(x,y);// x is base and y is to the power of x.
    printf("%d to the power %d is %d",x,y,power);
    return power;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    power(x,y);

    return 0;

}
