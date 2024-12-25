#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("num = %d\n", num);
    printf("&num = %p\n", &num);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);

    // change the value of num using the pointer variable
    *ptr = 20;

    printf("num = %d\n", num);

    return 0;
}
