#include<stdio.h>

int main()
{

    int number1,number2;
    char op;
    scanf("%d%c%d",&number1,&op,&number2);

    switch(op=='+'||op=='-'||op=='*'||op=='/')
    {
    case 1:
        printf("%d + %d=%d",op);
        break;
    case 2:
        printf("%d - %d=%d",op);
        break;
    case 3:
        printf("%d + %d=%d",op);
        break;
    default:
        printf("%d + %d=%d",op);
        break;
    }
    return 0;
}
