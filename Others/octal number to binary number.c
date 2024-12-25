#include <stdio.h>

int main() {
    long int octal, binary = 0;
    int rem, i = 1;

    printf("Enter an octal number: ");
    scanf("%lo", &octal);

    while (octal != 0) {
        rem = octal % 10;
        binary += rem * i;
        i *= 1000;
        octal /= 10;
    }

    printf("The binary equivalent is: %ld\n", binary);

    return 0;
}
