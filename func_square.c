#include<stdio.h>
int squ(int a){
  int s=a*a;
return s;
}
int main(){
int a;
printf("Enter the num to square: ");
scanf("%d",&a);
int res=squ(a);
printf("the square %d",res);
return 0;
}

