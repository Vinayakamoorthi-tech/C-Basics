#include<stdio.h>
int main()
{
    int arr[90];
    int n,low,high,mid,i,key;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {

    scanf("%d",&arr[i]);
    }
        printf("enter the key");
        scanf("%d",&key);
        low=0;
        high=n-1;
while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]<key)
        low=mid+1;
        else if(arr[mid]==key)
        {
            printf("found");
            break;
        }
        else
        {
            high=mid-1;
        }

        return 0;
    }
}
