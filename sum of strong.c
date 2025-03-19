int main()
{
    int n,sum=1,digit;
    printf("Enetr the number:");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        sum=sum+n;
        n=n/10;
    }
    printf("Sum of digit:%d",sum);
    return 0;

}
