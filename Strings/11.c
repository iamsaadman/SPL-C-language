#include <stdio.h>

int main() {
    char str[50];
    int i, sum = 0;


    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            sum += (str[i] - '0');
        }
    }

    printf("%d", sum);

    return 0;
}
