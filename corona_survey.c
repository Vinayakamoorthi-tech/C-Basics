int main()
{
int tp,ta,td,hp,gp;
printf("Total Population:");
scanf("%d",&tp);
printf("Total people affected:");
scanf("%d",&ta);
printf("Total Death:");
scanf("%d",&td),
hp=ta-td;
gp=tp-ta;
printf("      CORONA SURVEY     \n");
printf("Total Population:%d\n",tp);
printf("Total people affected:%d\n",ta);
printf("Total death:%d\n",td);
printf("Hospitalized people:%d\n",hp);
printf("Healthy people:%d\n",gp);
return 0;
}
