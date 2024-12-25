#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf("Enter three triangle :");
    scanf("%d %d %d",&x,&y,&z);
    sum=x+y+z;

    switch(sum==180 && x>0 && x<180 && y>0 && x<180 && z>0 && z<180)
    {
        case 1:printf("Yes");
        break;
        default: printf("No");
        break;
    }

    return 0;
    }
