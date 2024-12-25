#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME 256
#define MAX_LINE_LENGTH 1024

int main() {
    char filename[MAX_FILENAME];
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    int line_num = 1;

    // Get filename from user
    printf("Enter filename: ");
    fgets(filename, MAX_FILENAME, stdin);

    // Remove newline character from filename
    filename[strcspn(filename, "\n")] = '\0';

    // Open file for reading
    fp = fopen(filename, "r");

    // If file does not exist, create a new one
    if (fp == NULL) {
        printf("File does not exist. Creating new file.\n");
        fp = fopen(filename, "w");
        if (fp == NULL) {
            printf("Error creating file.\n");
            exit(1);
        }
    }

    // Print file contents
    printf("File contents:\n");
    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        printf("%d: %s", line_num, line);
        line_num++;
    }

    // Close file
    fclose(fp);

    // Open file for writing
    fp = fopen(filename, "w");

    // If file cannot be opened for writing, exit
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    // Get new file contents from user
    printf("Enter new file contents. Enter an empty line to save and exit.\n");
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        // If user enters an empty line, exit
        if (line[0] == '\n') {
            break;
        }

        // Write line to file
        fprintf(fp, "%s", line);
    }

    // Close file
    fclose(fp);

    // Print confirmation message
    printf("Changes saved.\n");

    return 0;
}
