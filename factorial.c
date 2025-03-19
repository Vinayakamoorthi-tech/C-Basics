int main()
{
    int n,i,fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
    fact=fact*i;
    printf("the factorial of num:%d",fact);
    }
    return 0;
}
