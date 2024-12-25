#include <stdio.h>
#include <string.h>
int find_substr(char a[],char b[])
{
    int i,j;
    int len1 = strlen(a);
    int len2 = strlen(b);
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
    return find_substr;
}

int main()
{
    char a[50],b[50];
    gets(a);
    gets(b);
    int subs = find_substr(a,b);
    printf("%d", subs);
    return 0;
}
