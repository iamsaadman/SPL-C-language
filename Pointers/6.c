#include <stdio.h>

int main() {
    int n, i;
    int arr[100], *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // assign address of first element to pointer

    printf("Elements of array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++; // increment pointer to point to next element
    }

    return 0;
}
