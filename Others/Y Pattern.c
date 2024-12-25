#include <stdio.h>

int main() {
    int i, j;

    // loop for rows
    for (i = 0; i < 5; i++) {
        // loop for columns
        for (j = 0; j < 5; j++) {
            if (i == j || i+j == 4) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
