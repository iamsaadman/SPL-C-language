#include<stdio.h>

int main()
{

  int x=5;
  int *ptr;

  ptr=&x;

  printf("value of x= %d\n",x);
  printf("Adress of x= %d\n",&x);
  printf("Pointer of ptr= %d\n",ptr);
  printf("Pointer pointing variable value of ptr= %d\n",*ptr);
  printf("Pointer Address of ptr= %d\n",&ptr);

    return 0;
}
