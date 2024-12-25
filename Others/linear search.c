#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100], size, key, i, index;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    index = linear_search(arr, size, key);

    if (index == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at index %d\n", index);
    }

    return 0;
}
