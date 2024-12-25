#include <stdio.h>

int main() {
    float balance = 0.0, amount = 0.0;
    int choice = 0;

    while (1) {
        // display menu
        printf("\nSelect an option:\n");
        printf("1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // read user input
        scanf("%d", &choice);

        // perform action based on user input
        switch(choice) {
            case 1: // check balance
                printf("\nYour current balance is $%.2f\n", balance);
                break;

            case 2: // deposit
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit of $%.2f successful\n", amount);
                printf("Your new balance is $%.2f\n", balance);
                break;

            case 3: // withdraw
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance. Withdrawal failed.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal of $%.2f successful\n", amount);
                    printf("Your new balance is $%.2f\n", balance);
                }
                break;

            case 4: // exit
                printf("\nThank you for banking with us.\n");
                return 0;

            default: // invalid input
                printf("\nInvalid input. Please try again.\n");
                break;
        }
    }

    return 0;
}
