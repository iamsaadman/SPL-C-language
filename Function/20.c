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

int GenerateNthPrime(int n) {

    int i=2,count=0;
      while (count < n) {
        if (IsPrime(i)){
        count++;



        }
        i++;
    }
    return i-1;
}

int main() {

    int n;

    scanf("%d", &n);
    printf("%dth prime number: %d\n",n,GenerateNthPrime(n));

    return 0;
}
