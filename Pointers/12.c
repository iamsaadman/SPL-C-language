#include <stdio.h>

int sum_array(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    int arr[] = { 5, 1, 4, 2, 8 };
    int size = sizeof(arr) / sizeof(int);

    int sum = sum_array(arr, size);

    printf("The sum of the elements in the array is: %d", sum);

    return 0;
}
