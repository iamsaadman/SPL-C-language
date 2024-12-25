#include <stdio.h>

int second_largest(int arr[], int size) {
    int max = arr[0];
    int second_max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            // If the current element is greater than the current maximum, update both max and second_max
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            // If the current element is greater than the current second maximum and not equal to the current maximum, update second_max
            second_max = arr[i];
        }
    }
    return second_max;
}

int main() {
    int arr[] = {1, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = second_largest(arr, size);
    printf("Second largest value: %d\n", result);
    return 0;
}
