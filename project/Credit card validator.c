#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LENGTH 16

bool is_valid_credit_card(const char *credit_card_number);

int main() {
    char credit_card_number[MAX_LENGTH + 1];

    printf("Enter a credit card number: ");
    scanf("%s", credit_card_number);

    if (is_valid_credit_card(credit_card_number)) {
        printf("Valid credit card number.\n");
    } else {
        printf("Invalid credit card number.\n");
    }

    return 0;
}

bool is_valid_credit_card(const char *credit_card_number) {
    int sum = 0;
    int length = 0;
    bool alternate = false;

    // Iterate through each digit of the credit card number
    for (const char *p = credit_card_number + MAX_LENGTH - 1; p >= credit_card_number; p--) {
        // If the current character is not a digit, return false
        if (*p < '0' || *p > '9') {
            return false;
        }

        int digit = *p - '0';
        length++;

        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        alternate = !alternate;
    }

    return length == MAX_LENGTH && sum % 10 == 0;
}
