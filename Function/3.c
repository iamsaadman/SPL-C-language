#include<stdio.h>

int printDetermineNumber(int n)
{

    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}

int main()
{

    int n;
    scanf("%d",&n);
    printDetermineNumber(n);
    return 0;
}
