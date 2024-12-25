#include <stdio.h>

int main() {
    int num = 10; // declare and initialize an integer variable
    int *p; // declare a pointer to an integer

    p = &num; // assign the address of 'num' to the pointer variable 'p'

    printf("Value of 'num': %d\n", num);
    printf("Address of 'num': %p\n", &num);
    printf("Value of 'p': %p\n", p);
    printf("Value stored at the memory location pointed to by 'p': %d\n", *p);

    return 0;
}
