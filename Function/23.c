#include <stdio.h>

int find_substr(char a[],char b[])
{


    int i,j;
    int len1 = 0;
    int len2 = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        len1++;
    }
    for(i = 0; b[i] != '\0'; i++)
    {
        len2++;
    }
    for(i = 0; i <= len1 - len2; i++)
    {
        for(j = 0; j < len2 ; j++)
        {
            if(a[i+j] != b[j])
            {
                break;
            }

        }
        if(j == len2)
        {
            return 1;
        }

    }
    return 0;
}

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int res = find_substr(a,b);
    printf("%d", res);
    return 0;
}
