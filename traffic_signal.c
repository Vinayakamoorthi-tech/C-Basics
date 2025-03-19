#include<stdio.h>
#include<unistd.h>
int main(){
int i,j,k,n,m,o;
printf("Duration for red light : ");
scanf("%d",&n);
printf("Duration of yellow light : ");
scanf("%d",&m);
printf("Duration of green light : ");
scanf("%d",&o);
printf("************************************************************\n");
printf("\nRed light !!!\n\n");
for(i=n;i>=0;i--){
    printf("Time remaining %d\n",i);
    sleep(1);
}
printf("\nYellow light !!!\n\n");
for(i=m;i>=0;i--){
    printf("Time remaining %d\n",i);
    sleep(1);
}
printf("\nGreen light !!!\n\n");
for(i=o;i>=0;i--){
    printf("Time remaining %d\n",i);
    sleep(1);
}

return 0;
}
