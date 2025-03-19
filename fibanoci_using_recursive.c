#include<stdio.h>
int fab(int i,int n, int next_term, int t1, int t2);
int main(){
    int t1=0,t2=1,next_term,i,n;
    printf("Enter the number of terms you need :");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);


return 0;
}
int fab(int i,int n, int next_term, int t1, int t2){
    if(t2==0){
        for(i=0;i<n;i++){
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        printf("%d ",next_term);
      }
    }
    return fab(t1+1,t2-1);
}



