#include<stdio.h>
#include<string.h>

struct triangle
{
    float base,height,area;
};

int main()
{
    struct triangle n1,n2,n3;
    scanf("%d",&n1);

    scanf("%f",&n1.base);

    scanf("%f",&n1.height);
    n1.area = (n1.base*n1.height)/2;

    scanf("%d",&n2);

    scanf("%f",&n2.base);

    scanf("%f",&n2.height);
    n2.area = (n2.base*n2.height)/2;

    scanf("%d",&n3);

    scanf("%f",&n3.base);

    scanf("%f",&n3.height);
    n3.area = (n3.base*n3.height)/2;

    if(n1.area>n2.area && n3.area)
    {
        printf("Area of 1: %.0f",n1.area);
    }
    else if(n2.area>n1.area && n3.area)
    {
        printf("Area of 2: %.0f",n2.area);
    }
    else if(n3.area>n1.area && n2.area)
    {
        printf("Area of 3: %.0f",n3.area);
    }
    return 0;
}
