#include<stdio.h>
int main(){

int a,b;
int choice;
scanf("%d%d%d", &a, &b , &choice);

if(choice==1){
printf("Addition:%d", a + b);
}
else if(choice==2){
printf("Subtraction:%d" , a - b);
}
else if(choice==3){
printf("Multiplication:%d", a * b);
}
else if (choice == 4){
        if (b == 0){
            printf("Quotient: Zero as divisor is not valid!");
        }
        else{
            printf("Quotient: %d", a / b);
        }
    }


return 0;
}
