#include <stdio.h>

int main(void)
{
    double num1, num2;
    int choice;
    double result;

    printf("Enter two real numbers: ");
    scanf("%lf%lf", &num1, &num2);

    printf("Enter a choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
            return 0;
        }
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        break;
    default:
        printf("Error: invalid choice\n");
        return 1;
    }

    return 0;
}
