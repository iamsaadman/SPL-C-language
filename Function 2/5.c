#include <stdio.h>

int longest_consecutive_sequence(char* str) {
    int max_len = 0;
    int curr_len = 1;
    char curr_char = '\0';
    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == curr_char) {
            // If the current character is the same as the previous character, increment the current length
            curr_len++;
        } else {
            // If the current character is different from the previous character, reset the current length
            curr_len = 1;
            curr_char = str[i];
        }
        if (curr_len > max_len) {
            // If the current length is greater than the maximum length, update the maximum length
            max_len = curr_len;
        }
    }
    return max_len;
}

int main() {
    char* str = "aaabbbbccc";
    int result = longest_consecutive_sequence(str);
    printf("Longest consecutive sequence: %d\n", result);
    return 0;
}
