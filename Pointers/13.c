#include <stdio.h>

int main() {
    int arr[] = { 5, 1, 4, 2, 8 };
    int size = sizeof(arr) / sizeof(int);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
