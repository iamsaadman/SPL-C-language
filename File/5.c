#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found.");
        return 0;
    }

    printf("File content:\n");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
        if (ch == '\n') {
            lines++;
        }
    }

    printf("\nNumber of lines: %d", lines);

    fclose(file);

    return 0;
}
