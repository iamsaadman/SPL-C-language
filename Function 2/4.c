#include <stdio.h>

void intersection(int arr1[], int len1, int arr2[], int len2, int result[], int* len) {
    int index = 0;
    // Loop through each element in arr1 and check if it exists in arr2
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                // If the element exists in arr2, add it to the result array
                result[index++] = arr1[i];
                break;
            }
        }
    }
    // Set the length of the result array
    *len = index;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int len1 = 5;
    int arr2[] = {3, 4, 5, 6, 7};
    int len2 = 5;
    int result[5];
    int len;
    intersection(arr1, len1, arr2, len2, result, &len);
    printf("Intersection: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
