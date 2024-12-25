#include<stdio.h>

int main()
{
    int num[100],n,max;
    printf("Enter how many numbers:");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];

    for(int i=1; i<n; i++)
    {
        if(max<num[i])
        max=num[i];
    }

    printf("Maximum=%d\n",max);

    return 0;
}
