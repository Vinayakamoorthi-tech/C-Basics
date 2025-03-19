#include<stdio.h>
#define pi 3.14
float cir(int r);
int main(){
int r;
printf("Enter the radius of the circle : ");
scanf("%d",&r);
float res=cir(r);
printf("Area of the circle = %.2f",res);
return 0;
}
float cir(int r){
 float res=pi*r*r;
 return res;
}
