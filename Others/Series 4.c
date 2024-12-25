#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/%d is %lf\n", n, sum);

    return 0;
}
