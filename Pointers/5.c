#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        printf("%d is greater than %d", *ptr1, *ptr2);
    } else if (*ptr1 < *ptr2) {
        printf("%d is greater than %d", *ptr2, *ptr1);
    } else {
        printf("Both numbers are equal");
    }

    return 0;
}
