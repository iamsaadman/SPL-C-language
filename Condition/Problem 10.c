#include<stdio.h>

int main()
{
    float a, b;
    char op;
    scanf("%f %c %f", &a, &op, &b);

    if (op == '*'){
        printf("Multiplication: %f", a * b);
    }
    else if (op == '/'){
        if (b == 0){
            printf("Division: Zero as divisor is not valid!");
        }
        else{
            printf("Division: %f", a / b);
        }
    }
    else if (op == '+'){
        printf("Addition: %f", a + b);
    }
    else if (op == '-'){
        printf("Subtraction: %f", a - b);
    }

    return 0;

}



