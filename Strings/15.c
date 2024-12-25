#include <stdio.h>

int main() {
    char str[100];
    int i, j, len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);


    len = 0;
    while (str[len] != '\0') {
        len++;
    }


    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }


    for (i = 0, j = 0; i < len; i++) {
        if (str[i] == ' ') {
            for (int k = j, l = i - 1; k < l; k++, l--) {
                char temp = str[k];
                str[k] = str[l];
                str[l] = temp;
            }
            j = i + 1;
        }
    }


    for (i = j, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);
    return 0;
}

