#include <stdio.h>

int main() {
    int n, i, count = 0;
    char arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            count++;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
