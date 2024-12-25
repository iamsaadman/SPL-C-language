#include <stdio.h>
#include <math.h>

int main() {
    char hex[17];
    int decimal = 0, i, length;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex);
    for (i = 0; i < length; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * pow(16, length - 1 - i);
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * pow(16, length - 1 - i);
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * pow(16, length - 1 - i);
        } else {
            printf("Invalid hexadecimal number.\n");
            return 0;
        }
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
