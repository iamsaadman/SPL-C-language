#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ATTEMPTS 5
#define MAX_WORD_LENGTH 20
#define NUM_WORDS 10

char words[NUM_WORDS][MAX_WORD_LENGTH] = {"computer", "programming", "algorithm", "variable", "function",
                                          "recursion", "iteration", "pointer", "string", "array"};

// Function to select a random word from the list of words
void select_word(char* word) {
    int index = rand() % NUM_WORDS;
    strcpy(word, words[index]);
}

// Function to play the mini game
void play_mini_game() {
    char word[MAX_WORD_LENGTH];
    int num_attempts = 0;
    select_word(word);
    printf("Guess the word! It has %d letters.\n", (int) strlen(word));
    while (num_attempts < MAX_ATTEMPTS) {
        char guess[MAX_WORD_LENGTH];
        printf("Attempt %d: ", num_attempts + 1);
        scanf("%s", guess);
        if (strcmp(guess, word) == 0) {
            printf("Congratulations, you guessed the word!\n");
            return;
        }
        printf("Incorrect guess. Try again.\n");
        num_attempts++;
    }
    printf("Sorry, you ran out of attempts. The word was %s.\n", word);
}

int main() {
    srand(time(0));
    int secret_number = rand() % 100 + 1;
    int guess;
    int num_guesses = 0;
    int max_guesses = 5;
    printf("Welcome to the guessing number game!\n");
    printf("I'm thinking of a number between 1 and 100. You have %d guesses.\n", max_guesses);
    while (num_guesses < max_guesses) {
        printf("Guess #%d: ", num_guesses + 1);
        scanf("%d", &guess);
        num_guesses++;
        if (guess == secret_number) {
            printf("Congratulations, you guessed the number!\n");
            play_mini_game();
            return 0;
        } else if (guess < secret_number) {
            printf("Too low. Guess again.\n");
        } else {
            printf("Too high. Guess again.\n");
        }
    }
    printf("Sorry, you ran out of guesses. The secret number was %d.\n", secret_number);
    return 0;
}
