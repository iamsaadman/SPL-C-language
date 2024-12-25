#include<Stdio.h>

int main()
{

    char str1[40];

    gets(str1);

    int count=0;

    for(int i=0; str1[i]!='\0'; i++){

        count++;
    }

    printf("%d",count);
    return 0;
}
