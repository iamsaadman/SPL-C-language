#include <stdio.h>

int main() {
    FILE *fp;
    char lines[100];

    fp = fopen("example.txt", "a");

    printf("Enter lines to append to the file (press Ctrl+D to stop):\n");

    while (fgets(lines, sizeof(lines), stdin)) {
        fputs(lines, fp);
    }

    fclose(fp);

    printf("Lines appended to file!\n");
    return 0;
}
