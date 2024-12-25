#include <stdio.h>

void addNumbers(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &sum);

    printf("Sum of %d and %d is %d", num1, num2, sum);

    return 0;
}
