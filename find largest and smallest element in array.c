#include<stdio.h>
int main(){
int i,n,j,c;
printf("enter the size of the array : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=1+i;j<n;j++){
        if(arr[i]>arr[j]){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
        }
    }
}
printf("arr = ");
for(i=0;i<n;i++){
    printf("%d   ",arr[i]);
}
printf("\nlargest element : %d",arr[n-1]);
printf("\nsmallest element : %d",arr[0]);

return 0;
}

