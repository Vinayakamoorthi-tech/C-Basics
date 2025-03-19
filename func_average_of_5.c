#include<stdio.h>
float avg(int a, int b, int c, int d, int e){
 float av=(a+b+c+d+e)/5;
   return av;
}
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
float res=avg(a,b,c,d,e);
printf("%f",res);
return 0;
}
