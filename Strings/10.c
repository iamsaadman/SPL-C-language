#include <stdio.h>
#include <string.h>

int checkpalindrome(char str[50])
{
    int i,count=0,n;
    n=strlen(str);
    for(i=0; i<n/2; i++)
    {
        if(str[i]==str[n-i-1])
            count++;

    }
    if(count==i)
        return 1;
    else
        return 0;



}
int main()
{

    char str[50];


    gets(str);


    if(checkpalindrome(str))
        printf("yes");
    else
        printf("no");



}
