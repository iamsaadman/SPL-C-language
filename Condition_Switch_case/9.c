#include<stdio.h>

int main()

{   
    char c;
    scanf("%c",&c);

   switch((c>='a'&&c<='z')&&(c>='A'&&c<='Z'))
    {
    case 1:
        printf("Alphabet");
        break;

    default:
       if(c>='0'&c<='9')
        {
            printf("Digit",c);

        }
        else
        {
            printf("Speical",c);
        }
    }
return 0;
    }
