#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int i, n = 5;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr[3] += 15;

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
