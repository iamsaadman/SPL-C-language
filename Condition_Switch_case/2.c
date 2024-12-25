#include<stdio.h>

int main(){

int x;
scanf("%d",&x);

switch(x%2==0){
case 0:printf("Odd");
    break;

case 1:printf("Even");

}

return 0;
}
