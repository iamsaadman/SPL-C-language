#include <stdio.h>

int main()
{
    int a, d, n, sum = 0;
    printf("Enter the first term of the A.P. series: ");
    scanf("%d", &a);
    printf("Enter the common difference of the A.P. series: ");
    scanf("%d", &d);
    printf("Enter the number of terms of the A.P. series: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum += a + i * d;
    }
    printf("The sum of the A.P. series is: %d", sum);
    return 0;
}
