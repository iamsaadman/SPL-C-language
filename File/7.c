#include <stdio.h>

int main() {
    FILE *file, *temp;
    char filename[100];
    char ch;
    int line_number, current_line;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found.");
        return 0;
    }

    printf("Enter line number to delete: ");
    scanf("%d", &line_number);

    temp = fopen("temp.txt", "w");

    if (temp == NULL) {
        printf("Error creating temporary file.");
        fclose(file);
        return 0;
    }

    current_line = 1;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            current_line++;
        }
        if (current_line != line_number) {
            fputc(ch, temp);
        }
    }

    fclose(file);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d deleted successfully.", line_number);

    return 0;
}



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
