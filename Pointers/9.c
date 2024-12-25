#include <stdio.h>

void factorial(int n, long long *result) {
    *result = 1;

    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
}

int main() {
    int n;
    long long result;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    factorial(n, &result);

    printf("Factorial of %d is: %lld\n", n, result);

    return 0;
}
