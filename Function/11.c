#include <stdio.h>
int fun(char str[])
{
    int i,count = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[50];
    gets(str);
    int countlength = fun(str);
    printf("%d",countlength);
    return 0;
}
