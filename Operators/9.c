#include<stdio.h>

int main(){

int a,b,c,X,Y,Z;
scanf("%d%d%d",&a,&b,&c);

X=a-b/3+c*2-1;
printf("X=%d\n",X);

Y=a-(b/(3+c)*2)-1;
printf("Y=%d\n",Y);

Z=a-((b/3)+(c*2))-1;
printf("Z=%d\n",Z);





return 0;
}
