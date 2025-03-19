#include<stdio.h>
int main(){
int i=1,n;
printf("Enter the number for the table : ");
scanf("%d",&n);
for(i=1;i<=10;i++){
    printf("%d\n",i*n);
}

return 0;
}
