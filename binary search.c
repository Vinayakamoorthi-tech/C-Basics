#include<stdio.h>
int main(){
int n,t,found=0;
printf("Enter the size of the array :");
scanf("%d",&n);
int arr[n],l=0,r=n-1,m;
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the target value :");
scanf("%d",&t);
while(l<=r){
    m=l+(r-l)/2;
    if(t==arr[m]){
        found ++;
        break;
    }
    if(t>arr[m]){
        l=m+1;
    }
    if(t<arr[m]){
        r=m-1;
    }
}
if(found==0){
    printf("NOT FOUND");
}
else{
    printf("the element %d is found at %d",arr[m],m);
}
return 0;
}
