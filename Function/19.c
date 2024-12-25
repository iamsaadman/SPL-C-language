#include <stdio.h>

int IsPrime(int n) {

    int i;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return IsPrime;
}

void GeneratePrime(int n) {

    int i;
    for (i = 2; i < n; i++) {
        if (IsPrime(i)){


            printf("%d ", i);
        }
    }
}

int main() {

    int n,i;

    scanf("%d", &n);
    printf("Prime numbers less than %d are: %d ",n,i);
    GeneratePrime(n);
    return 0;
}
