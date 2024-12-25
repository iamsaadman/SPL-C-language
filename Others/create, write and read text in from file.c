#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open the file for writing
    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter some text to write to the file: ");
    fgets(text, 100, stdin);

    // Write the text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    // Open the file for reading
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the text from the file
    fgets(text, 100, fp);

    // Close the file
    fclose(fp);

    printf("The text in the file is: %s", text);

    return 0;
}
