#include<stdio.h>

int main()
{

  int x=10,y=20,z=30;;
  int *ptr;

  ptr=&x;
  printf("value of x= %d\n",*ptr);
  ptr=&y;
  printf("value of y= %d\n",*ptr);
  ptr=&z;
  printf("value of z= %d\n",*ptr);

    return 0;
}
