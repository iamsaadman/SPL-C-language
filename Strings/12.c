#include <stdio.h>
#include <string.h>

int main() {
    char str[50], word[50];
    int i, count = 0;


    gets(str);


    gets(word);

    for(i = 0; str[i] != '\0'; i++) {
        if(strncmp(&str[i], word, strlen(word)) == 0) {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}

