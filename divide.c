#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a value of a:");
    scanf("%d/n",&a);
    printf("Enter a value b:");
    scanf("%d/n",&b);
    a=a/b;
    b=a%b;
    printf("The Remainder of a:%d",a);
    printf("\nThe Quoitent of b:%d",b);
    return 0;
}
