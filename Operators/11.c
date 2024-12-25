#include<stdio.h>

int main(){

int a,b,c,statement1,statement2,statement3;
scanf("%d%d%d",&a,&b,&c);

statement1=		(a+b)<=80 && b>=0;
statement2=		(a-b)==0 || c!=0;
statement3=	     a!=b ||(b<a)&&c>0;

printf("  a) %d\n",statement1);
printf("  b) %d\n",statement2);
printf("  c) %d\n",statement3);




return 0;
}
