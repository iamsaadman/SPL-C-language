#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_score = 0;
    int computer_score = 0;
    int rounds = 1;

    printf("Welcome to Rock Paper Scissors!\n");
    printf("You will be playing against the computer.\n\n");

    while (rounds <= 3) {
        printf("Round %d:\n", rounds);
        printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");

        int player_choice;
        scanf("%d", &player_choice);

        if (player_choice < 1 || player_choice > 3) {
            printf("Invalid choice. Please enter a number between 1 and 3.\n\n");
            continue;
        }

        int computer_choice = rand() % 3 + 1;
        printf("The computer chooses %d.\n", computer_choice);

        if (player_choice == computer_choice) {
            printf("It's a tie!\n\n");
        } else if ((player_choice == 1 && computer_choice == 3) ||
                   (player_choice == 2 && computer_choice == 1) ||
                   (player_choice == 3 && computer_choice == 2)) {
            printf("You win this round!\n\n");
            player_score++;
        } else {
            printf("The computer wins this round.\n\n");
            computer_score++;
        }

        rounds++;
    }

    printf("Game over!\n");

    if (player_score > computer_score) {
        printf("You win!\n");
    } else if (player_score < computer_score) {
        printf("The computer wins.\n");
    } else {
        printf("It's a tie.\n");
    }

    printf("Final score: You %d, Computer %d\n", player_score, computer_score);

    return 0;
}
