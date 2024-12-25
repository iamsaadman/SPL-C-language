#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20; // declare and initialize two integer variables
    int *p1, *p2; // declare two pointer variables to integers

    p1 = &num1; // assign the address of 'num1' to the pointer variable 'p1'
    p2 = &num2; // assign the address of 'num2' to the pointer variable 'p2'

    printf("Initial values:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("p1 = %p, p2 = %p\n", p1, p2);

    // swap the values stored in num1 and num2 using pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Values after swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("p1 = %p, p2 = %p\n", p1, p2);

    return 0;
}
