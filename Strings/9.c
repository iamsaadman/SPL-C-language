#include<stdio.h>
#include<string.h>


int main()
{

    char str[50],a;


    gets(str);
    int count=0;
    a=getchar();

    for(int i=0; str[i]; i++)
    {
        if(str[i]==a)
        {
            count++;
        }

    }
    printf("%d",count*2);





}
