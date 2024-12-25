#include<stdio.h>

int main(){

double a,b,X;

printf("Enter two numbers:");
scanf("%lf%lf",&a,&b);

X=(3.31*a*a+2.01*b*b*b)/(7.16*b*b+2.01*a*a*a);

printf("X=%lf\n",X);



return 0;
}
