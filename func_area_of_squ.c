#include<stdio.h>
int squ(int a){
  int s=a*a;
return s;
}
int main(){
int a;
printf("Enter the side of the square: ");
scanf("%d",&a);
int res=squ(a);
printf("the area of square = %d sq.unit",res);
return 0;
}

