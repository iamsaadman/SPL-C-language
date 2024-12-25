#include<stdio.h>

int main(){

long int a=2147483647;
long long int b= 9223372036854775807;
long double c= 1.1E+4932;
short int d= 32767;

printf("The long int value=%ld\n",a);
printf("The value of long long int value is %lld\n", b);
printf("The value of long double value is %Lf\n", c);
printf("The value of short in value is %hd\n", d);




return 0;
}
