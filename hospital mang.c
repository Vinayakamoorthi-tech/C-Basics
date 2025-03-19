#include<stdio.h>
int main(){
int d;
printf("Number of doctors : ");
scanf("%d",&d);
int n;
printf("Number of nurses : ");
scanf("%d",&n);
int r;
printf("Number of rooms : ");
scanf("%d",&r);
int p;
printf("Number of patients : ");
scanf("%d",&p);
int res;
res=r-p;
printf("\n\n*HOSPITAL MANAGEMENT*");
printf("\nNumber of doctors  : %d",d);
printf("\nNumber of nurses   : %d",n);
printf("\nNumber of rooms    : %d",r);
printf("\nNumber of patients : %d",p);
printf("\nNumber of rooms available : %d",res);
return 0;
}
