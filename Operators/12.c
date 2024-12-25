#include<stdio.h>

int main(){
float a,b,c,root1,root2,discriminant;
scanf("%f%f%f",&a,&b,&c);


discriminant=b*b-4*a*c;

if(discriminant>0){
root1= (-b + sqrt(b*b-4*a*c))/2*a;
root2= (-b - sqrt(b*b-4*a*c))/2*a;
printf("%.2f %.2f\n",root1,root2);
}

else if(discriminant==0){

root1=root2=-b/(2*a);
printf("%.2f %.2f\n",root1);

}
else {

    printf("Imaginary.\n");
}









}
