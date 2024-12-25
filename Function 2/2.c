#include <stdio.h>

int max(int arr[], int len) {
    int max_val = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    int arr[100];
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    int max_val = max(arr, len);
    printf("Maximum value in the array: %d\n", max_val);
    return 0;
}
