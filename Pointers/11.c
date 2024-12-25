#include <stdio.h>

void sort_array(int *arr, int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + j) < *(arr + i)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 1, 4, 2, 8 };
    int size = sizeof(arr) / sizeof(int);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    sort_array(arr, size);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
