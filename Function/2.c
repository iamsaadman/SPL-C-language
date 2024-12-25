#include <stdio.h>

void printcharactervalue(char c) {
    printf("Value received from main: %c\n", c);
}

int main() {
    char c;
    scanf("%c", &c);
    printcharactervalue(c);
    return 0;
}
