#include<stdio.h>
struct address{
int doorno;
char
};
struct product{
char *product_name[50];
int product_inch;
char *product_color[50];
char *product_type[50];
struct address b;
};
int main(){
struct product a;
printf("Enter the product name:");
scanf("%s", &a.product_name);
printf("enter the inches of the product:");
scanf("%d",&a.product_inch);
printf("Enter the product color:");
scanf("%s",&a.product_color);
printf("Enter the product type:");
scanf("%s",&a.product_type);
printf("%s %d %s %s",a.product_name,a.product_inch,a.product_color,a.product_type);
return 0;
}
