#include<stdio.h>
#include<string.h>

struct triangle{
    float base,height,area;
};

int main(){
    struct triangle n;
    scanf("%d",&n);

   scanf("%f",&n.base);

   scanf("%f",&n.height);
    n.area = (n.base*n.height)/2;
    printf("Area of 1: %.0f", n.area);

    scanf("%d",&n);

    scanf("%f",&n.base);

    scanf("%f",&n.height);
    n.area = (n.base*n.height)/2;
    printf("Area of 2: %.0f", n.area);

    scanf("%d",&n);

    scanf("%f",&n.base);

    scanf("%f",&n.height);
    n.area = (n.base*n.height)/2;
    printf("Area of 3: %.0f", n.area);

    return 0;
}
