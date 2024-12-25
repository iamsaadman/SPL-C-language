#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

typedef struct {
    char username[50];
    char password[50];
} user;

void register_user(user users[], int *num_users) {
    if (*num_users >= MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    char username[50];
    char password[50];

    printf("Enter a username: ");
    scanf("%s", username);
    printf("Enter a password: ");
    scanf("%s", password);

    user new_user;
    strcpy(new_user.username, username);
    strcpy(new_user.password, password);

    users[*num_users] = new_user;
    *num_users += 1;

    printf("User registered successfully!\n");
}

int login(user users[], int num_users) {
    char username[50];
    char password[50];

    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    user users[MAX_USERS];
    int num_users = 0;

    int option;
    int logged_in_user_index = -1;

    do {
        printf("\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Quit\n");
        printf("\n");
        printf("Enter an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                register_user(users, &num_users);
                break;
            case 2:
                logged_in_user_index = login(users, num_users);
                if (logged_in_user_index != -1) {
                    printf("Login successful!\n");
                } else {
                    printf("Login failed. Incorrect username or password.\n");
                }
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid option.\n");
                break;
        }
    } while (option != 3);

    return 0;
}
