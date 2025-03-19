#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
char a[n],b[n];

for(i=0;i<n;i++){
    b[i]=a[i];
}
printf("string 1");
for(i=0;i<n;i++){
    printf("%c",a[i]);
}
printf("\nstring 2");
for(i=0;i<n;i++){
    printf("%c",b[i]);
}
return 0;
}
