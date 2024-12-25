#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x, guess, tries = 3;

  srand(time(NULL));
  x = rand() % 100 + 1;  // Random number between 1 and 100

  while (tries > 0) {
    printf("Enter your guess: ");
    scanf("%d", &guess);

    switch (tries) {
      case 3:
      case 2:
      case 1:
        if (guess == x) {
          printf("Right, Player-2 wins!\n");
          return 0;
        } else {
          printf("Wrong, %d chance(s) left!\n", tries - 1);
        }
        break;
      default:
        printf("Player-1 wins!\n");
        return 0;
    }

    tries--;
  }

  return 0;
}
