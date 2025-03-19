#include<stdio.h>
int arerec(int a, int b){
 int ar=2*(a+b);
 return ar;

}
int main(){
    int a,b,area;
    printf("Enter the sides of the rectangle :");
    scanf("%d%d",&a,&b);
    area=arerec(a,b);
    printf("Area of the rectangle = %d sq.unit",area);
return 0;
}

