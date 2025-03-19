#include<stdio.h>
#include<string.h>
//personal details
int main(){
char name[50], date_of_birth[50], father_name[50],mother_name[50];
int age, contact_number;
printf("Enter your name : ");
scanf("%[^\n]",name);
printf("Enter your age : ");
scanf("%d",&age);
printf("Enter your date of birth : ");
scanf("%s",&date_of_birth);
printf("Enter your contact number : ");
scanf("%d",&contact_number);
printf("Enter your father name : ");
scanf("%[^\n]",father_name);
printf("Enter your mother name : ");
scanf("%[^\n]",mother_name);
printf("\n*******************************************************\n");
printf("\t\t\tBIO DATA");
printf("\nName : %s",name);
printf("\nAge : %d",age);
printf("\nDOB : %s",date_of_birth);
printf("\nContact number : %d",contact_number);
printf("\nFather name : %s",father_name);
printf("\nMother name : %s",mother_name);

return 0;
}
