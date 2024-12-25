#include <stdio.h>
#include <string.h>

int count_vowels(char *str) {
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int vowel_count = count_vowels(str);
    printf("Number of vowels: %d\n", vowel_count);
    return 0;
}
