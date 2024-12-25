#include<stdio.h>
int main ()

{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);

    switch(a>=b){

    case 1:
    printf("%d is greater than %d",a,b);
    break;

    case 2:
    printf("%d is equal to %d",a,b);
    break;

    default :printf("%d is less than %d",a,b);
    break;

    }
    return 0;
}
