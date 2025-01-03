#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1, rem;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal > 0) {
        rem = octal % 10;
        decimal += rem * base;
        base *= 8;
        octal /= 10;
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
