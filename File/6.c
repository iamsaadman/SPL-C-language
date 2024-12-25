#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int words = 0, characters = 0;
    int in_word = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found.");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch) || ispunct(ch)) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            characters++;
            in_word = 1;
        }
    }

    if (in_word) {
        words++;
    }

    printf("Number of words: %d\n", words);
    printf("Number of characters: %d", characters);

    fclose(file);

    return 0;
}
