#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age:");
    scanf("%d",&a);
    if(a>=25){
        printf("you are in eligble age",a);
    }
    else{
        printf("not eligible");
    }
    int b;
    printf("\nEnter your salary:");
    scanf("%d",&b);
    if(b>=35000){
        printf("you are eligiblr for loan");
    }
    else{
        printf("you are not eligible for loan");
    }
    return 0;
}
