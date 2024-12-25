#include<stdio.h>

int printDetermineNumbers(int n,int s)
{

    if(n>s)
    {
        printf("%d is greater than %d",n,s);
    }
    else if(n<s)
    {
        printf("%d is less than %d",n,s);
    }
    else{
     printf("%d is equal to %d",n,s);
    }

}

int main()
{

    int n,s;
    scanf("%d %d",&n,&s);
    printDetermineNumbers(n,s);
    return 0;
}
