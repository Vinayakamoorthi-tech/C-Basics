#include<stdio.h>
int main(){
int i,n,search,found=0;
printf("enter the size of the array : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("arr = ");
for(i=0;i<n;i++){
    printf("%d   ",arr[i]);
}
printf("\nenter the search value : ");
scanf("%d",&search);
for(i=0;i<n;i++){
    if(search==arr[i]){
        found=1;
        printf("the %d is found at the index %d",search,i);
    }
}
if(found==0){
    printf("element not found");
}
return 0;
}
