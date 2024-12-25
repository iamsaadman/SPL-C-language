#include<stdio.h>
#include<math.h>

int main(){

float x,result;
scanf("%f",&x);

result= 2*cos(x)*cos(x)-sqrt(3)*sin(x)+sin(x)/2;
printf("%f",result);




return 0;
}
