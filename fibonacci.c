int main()
{
 int n1,n2,n3,i,n;
 printf("Enetr a number:");
 scanf("%d",&n);
 n1=0;
 n2=1;
 n3=1;
 for(i=0;i<n;i++)
 {
     if(i<=0)
     {
         n3=i;
     }
     else
     {
         n3=n1+n2;
         n2=n1;
         n2=n3;
     }
     printf("the fibbp:%d",n3);
     return 0;
 }
}
