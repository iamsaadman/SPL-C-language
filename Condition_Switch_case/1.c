#include<stdio.h>

int main(){

int x;
scanf("%d",&x);

switch(x>0){
case 0:printf("Negative");
    break;

case 1:printf("Positive");
}
return 0;
}
