#include <stdio.h>

int main() {
    long int binary, hexadecimal = 0;
    int rem, i = 0;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0) {
        rem = binary % 10;
        hexadecimal += rem * pow(2, i);
        ++i;
        binary /= 10;
    }

    printf("The hexadecimal equivalent is: %lX\n", hexadecimal);

    return 0;
}