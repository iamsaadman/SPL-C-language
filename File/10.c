#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char source_file[100], dest_file[100], c;

    printf("Enter the name of the source file: ");
    scanf("%s", source_file);

    printf("Enter the name of the destination file: ");
    scanf("%s", dest_file);

    fp1 = fopen(source_file, "r");

    if (fp1 == NULL) {
        printf("Error opening the file '%s'\n", source_file);
        return 1;
    }

    fp2 = fopen(dest_file, "w");

    if (fp2 == NULL) {
        printf("Error creating the file '%s'\n", dest_file);
        fclose(fp1);
        return 1;
    }

    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
