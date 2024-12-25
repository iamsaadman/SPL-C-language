#include<stdio.h>

void swaptwonumbers(int *n1,int *n2){
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;


printf("Value in func:%d %d\n",n1,n2);
return swaptwonumbers;

}
int main(){

int n1,n2;
scanf("%d %d",&n1,&n2);

swaptwonumbers(&n1,&n2);


printf("Value in main:%d %d\n",n1,n2);

return 0;
}
