#include <stdio.h>

int sum_of_squares(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * arr[i]; // add the square of the current element to the sum
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sum_of_squares(arr, size);
    printf("Sum of squares: %d\n", result);
    return 0;
}
