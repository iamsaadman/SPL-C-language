#include<stdio.h>

int main()
{
    float a, b;
    int choice;
    scanf(" %d %f  %f", &choice , &a, &b);
    //scanf("%d", &choice);

    if (choice == 1){
        printf("Addition: %.f", a + b);
    }
    else if (choice == 2){
        printf("Subtraction: %.f", a - b);
    }
    else if (choice == 3){
        printf("Multiplication: %.f", a * b);
    }
    else if (choice == 4){
        int Case;
        scanf("%d", &Case);
        if (Case== 1)
        {
            printf("Quotient: %.f", a / b);
        }
        else{
            printf("Reminder: %.f", a ,'%', b );
        }
        }



    return 0;
}
