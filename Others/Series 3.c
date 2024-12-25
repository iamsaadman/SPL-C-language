#include <stdio.h>

int main() {
    int n;
    double sum = 0, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += (double)i / factorial;
    }

    printf("The sum of the series 1/1! + 2/2! + 3/3! + 4/4! + ... %d/%d! is %lf\n", n, n, sum);

    return 0;
}
