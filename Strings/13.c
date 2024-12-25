#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],temp=1,c='*';
    int  i,j,k=0,n;


    gets(str);
    for(i=0; str[i]; i++)
    {
        if(!(str[i]==c))
        {
            for(j=i+1; str[j]; j++)
            {
                if(str[i]==str[j])
                    str[j]=c;

            }

        }


    }

    for(i=0; str[i]; i++)
    {
        str[i]=str[i+k];


        if(str[i]==c)
        {
            k++;
            i--;
        }

    }


    printf("%s",str);


    return 0;
}
