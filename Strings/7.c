#include<stdio.h>

int main()
{

    char str[50],i;


    gets(str);


    for( i=0; str[i]!='\0'; i++)
    {

            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
            else if(str[i]>='a' && str[i]<='z')
                str[i]-=32;


        }
        printf("%s",str);


    }
