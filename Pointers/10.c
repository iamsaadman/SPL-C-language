#include <stdio.h>
#include <string.h>

void count_vowels_consonants(char *str, int *vowels, int *consonants) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char c = *(str + i);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            (*vowels)++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            (*consonants)++;
        }
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count_vowels_consonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
