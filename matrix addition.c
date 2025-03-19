#include<stdio.h>
void main(){
int r,c,i,j,a[10][10],b[10][10],sum[i][j];
printf("rows:");
scanf("%d",&r);
printf("Coloumns:");
scanf("\n%d",&c);
printf("\nFirst matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
printf("\n Second Matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter element a%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",sum[i][j]);
        printf("\n");
    }
}
return 0;
       }
