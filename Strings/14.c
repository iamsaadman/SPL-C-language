#include <stdio.h>

int main()
{
    char str[50], max_char;
    int i, j, max_count = 0, count=0;


    gets(str);


    for(i = 0; str[i] != '\0'; i++)
    {



        for(j = i; str[j] != '\0'; j++)
        {
            if(str[j] == str[i])
            {
                count++;
            }
        }

        if(count > max_count)
        {
            max_count = count;
            max_char = str[i];
        }
    }

    printf("%c", max_char);

    return 0;
}
