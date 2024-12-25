#include <stdio.h>

int main() {
    char filename[100];
    int count = 0;
    double sum = 0, num;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: could not open file %s\n", filename);
        return 1;
    }

    while (fscanf(fp, "%lf", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        double average = sum / count;
        printf("The average of the %d numbers is: %lf\n", count, average);
    } else {
        printf("The file contains no numbers.\n");
    }

    return 0;
}
