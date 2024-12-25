#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[50];
    char line[100];
    char new_line[100];
    int line_num = 0, replace_num;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    printf("Enter line number to replace: ");
    scanf("%d", &replace_num);

    while (fgets(line, 100, file) != NULL) {
        line_num++;

        if (line_num == replace_num) {
            printf("Enter new line: ");
            fgets(new_line, 100, stdin);
            new_line[strcspn(new_line, "\n")] = 0;

            fseek(file, -(strlen(line)), SEEK_CUR);
            fprintf(file, "%s", new_line);
            break;
        }
    }

    fclose(file);

    printf("Line replaced successfully\n");

    return 0;
}
