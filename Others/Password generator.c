#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10 // Password length
#define CHARSET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+"

int main() {
    char password[LENGTH+1]; // Password buffer
    int i;

    srand(time(NULL)); // Seed the random number generator

    // Generate a random character from the character set for each position in the password
    for (i = 0; i < LENGTH; i++) {
        password[i] = CHARSET[rand() % (sizeof(CHARSET) - 1)];
    }
    password[LENGTH] = '\0'; // Null-terminate the password string

    printf("Your password is: %s\n", password);

    return 0;
}
