#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (x > y)
    {
    case 1:
        printf("%d is greater than %d\n", x, y);
        break;
    default :
        if (x == y)
        {
            printf("%d is equal to %d\n", x, y);
        }
        else
        {
            printf("%d is less than %d\n", x, y);
        }
        break;
    }
    return 0;
}
