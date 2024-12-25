#include <stdio.h>

int main() {
    long int binary, octal = 0;
    int rem, i = 0;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0) {
        rem = binary % 10;
        octal += rem * pow(2, i);
        ++i;
        binary /= 10;
    }

    printf("The octal equivalent is: %lo\n", octal);

    return 0;
}
