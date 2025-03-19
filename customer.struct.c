#include<stdio.h>
#include<string.h>
int main(){
int n,date[10],i;
struct customer{
char name[50];
int mobile_num;
char phone_model[50];
char problem[50];
};
printf("Enter number of customers : ");
scanf("%d",&n);
printf("Enter todays date : ");
scanf("%s",date);
struct customer arr[n];
for(i=1;i<=n;i++){
    printf("Enter the customer name %d : ",i);
    gets(arr[i].name);
    printf("Enter customer mobile number %d : ",i);
    gets(arr[i].mobile_num);
    printf("Enter mobile model %d : ",i);
    gets(arr[i].phone_model);
    printf("Enter the problem in mobile %d : ",i);
    gets(arr[i].problem);
}
for(i=1;i<=n;i++){
  printf("%d \n",i);
  printf("%s\n",arr[i].name);
  printf("%d\n",arr[i].mobile_num);
  printf("%s\n",arr[i].phone_model);
  printf("%s\n",arr[i].problem);
}
return 0;
}
