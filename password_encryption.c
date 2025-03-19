#include<stdio.h>
#include<string.h>
int main(){
char pass[1000],encrypt[1000],decrypt[1000];
printf("your must contain uppercase, lower case, special symbols and number to be strong");
printf("\nEnter your password : ");
scanf("%[^\n]",pass);
int i;
for(i=0;i<strlen(pass);i++){
    encrypt[i]=pass[i]+9;
}
encrypt[i]='\0';
printf("Encrypten password = %s",encrypt);
for(i=0;i<strlen(pass);i++){
    decrypt[i]=encrypt[i]-9;
}
decrypt[i]='\0';
printf("\nDecrypted password = %s",decrypt);
return 0;
}
