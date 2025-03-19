int main(){
int cp,sp,res;
printf("Enter the cost price:");
scanf("%d",&cp);
printf("Enter the selling price:");
scanf("%d",&sp);

res=sp-cp;
if(res<0){
    printf("Loss");
}
else{
    printf("Profit");
}
if (res<0){
    printf("\nLoss = %d",res);

}
else{
    printf("\nProfit = %d",res);
}
return 0;
}
