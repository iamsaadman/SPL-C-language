#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Welcome to the Scientific Calculator!\n");

    do {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the operator (+, -, *, /, ^, s, c, t, l, q to quit): ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case '-':
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case '*':
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case '/':
                do {
                    printf("Enter the second number (cannot be zero): ");
                    scanf("%f", &num2);
                    if (num2 == 0) {
                        printf("Error: division by zero\n");
                    }
                } while (num2 == 0);
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                break;
            case '^':
                printf("Enter the exponent: ");
                scanf("%f", &num2);
                result = pow(num1, num2);
                printf("%.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            case 's':
                result = sin(num1);
                printf("sin(%.2f) = %.2f\n", num1, result);
                break;
            case 'c':
                result = cos(num1);
                printf("cos(%.2f) = %.2f\n", num1, result);
                break;
            case 't':
                result = tan(num1);
                printf("tan(%.2f) = %.2f\n", num1, result);
                break;
            case 'l':
                result = log(num1);
                printf("log(%.2f) = %.2f\n", num1, result);
                break;
            case 'q':
                printf("Goodbye!\n");
                break;
            default:
                printf("Error: invalid operator\n");
                break;
        }

    } while (op != 'q');

    return 0;
}
