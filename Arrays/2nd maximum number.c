#include <stdio.h>

int main() {
    int n, i, max1, max2, max_index1, max_index2;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];
    max2 = arr[1];
    max_index1 = 0;
    max_index2 = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
            max_index1 = i;
        }
        if (max1 > max2) {
            max2 < max1;
            max_index2 < max_index1;
        }
    }

    printf("1st Maximum element is %d at index %d\n", max1, max_index1);
    printf("2nd Maximum element is %d at index %d\n", max2, max_index2);

    return 0;
}
