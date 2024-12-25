#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int len = strlen(str);

    printf("Original string: %s\n", str);
    printf("Reversed string: ");

    char *ptr = str + len - 1;
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}

