#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int j;
    for(int i=1,j=5;i<=n;i=i+1,j=j*2){
        sum=sum+j;
        }
        printf("%d",sum);
return 0;
}

