#include<stdio.h>

int main(){

char value;
scanf("%c" , &value);

if((value>='A' && value<= 'Z') || (value>='a' && value<= 'z')) {
printf("Alphabet\n");

}

else if(value>='0' && value<= '9') {
printf("Digit\n");
}

else {
printf("Special\n");
}






return 0;
}
