#include<stdio.h>
int main(){
struct node{
int data;
struct node *ptr;
};
int *head;
struct node n1={1,NULL};
struct node n2={2,NULL};
head=&n1.data;
n1.ptr=&n2;
printf("%d",n1.ptr->data);
printf("\n%d",*head);
return 0;
}
