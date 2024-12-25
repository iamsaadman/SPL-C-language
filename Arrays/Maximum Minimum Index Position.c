#include <stdio.h>

int main() {
    int n, i, max, min, max_index, min_index;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    max_index = 0;
    min_index = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Maximum element is %d at index %d\n", max, max_index);
    printf("Minimum element is %d at index %d\n", min, min_index);

    return 0;
}
