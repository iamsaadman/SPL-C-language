#include <stdio.h>

int is_prime(int num);
void print_primes(int num_primes);

int main() {
    int num_primes = 500;
    print_primes(num_primes);
    return 0;
}

int is_prime(int num) {
    int i;

    if (num < 2) {
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void print_primes(int num_primes) {
    int num = 2, count = 0;

    while (count < num_primes) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
}
