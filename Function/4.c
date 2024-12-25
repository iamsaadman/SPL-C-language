#include<stdio.h>

int printDetermineNumber(int n)
{

    if(n>0)
    {
        printf("positive");
    }
    else if(n==0)
    {
        printf("zero");
    }
    else{
    printf("negative");
    }

}

int main()
{

    int n;
    scanf("%d",&n);
    printDetermineNumber(n);
    return 0;
}
