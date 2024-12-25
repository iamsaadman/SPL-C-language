#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = pow(2*i - 1, 2);
        double denominator = pow(2*i - 1, 3);
        sum += numerator / denominator;
    }

    printf("The sum of the series 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till %d terms is %lf\n", n, sum);

    return 0;
}
