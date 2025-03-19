#include<stdio.h>

int recursive_sum(int a,int b);
int main(){
int num1,num2,result;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
result=recursive_sum(num1,num2);
printf("the result is %d",result);
return 0;
}
int recursive_sum(int a,int b){
if(b==0){
    return a;
}
return recursive_sum(a+1,b-1);
}
