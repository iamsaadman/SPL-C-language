#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));//srand(time(0)) is a function call used in C and C++ to seed the random number generator.
    number = rand() % 100 + 1;
    printf("Guess the number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations, you guessed the number in %d attempts!\n", attempts);
        }

    } while (guess != number);

    return 0;
}
