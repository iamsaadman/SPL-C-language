#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int sum=0;
    int i;
    int j;
    for( i=1,j=1;i<=n;i=i+1,j=j+2){
        sum=sum+j;
        }
        printf("%d",sum);

return 0;
}

