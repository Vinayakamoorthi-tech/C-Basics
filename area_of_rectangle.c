#include<stdio.h>
//area of rectangle
int main(){
int len,bre,res;
printf("Enter the length of the rectangle : ");
scanf("%d",&len);
printf("Enter the breath of the rectangle : ");
scanf("%d",&bre);
res=2*(len+bre);
printf("Area of the rectangle = %d sq.units", res);
return 0;
}
