int main(){
   char n[50];
   printf("Enter the student name:");
   scanf("%s",n);
 int mt;
 printf("Enter your tamil mark:");
 scanf("%d",&mt);
 int me;
 printf("Enter your english mark:");
 scanf("%d",&me);
  int mm;
 printf("Enter your maths mark:");
 scanf("%d",&mm);
  int ms;
 printf("Enter your science mark:");
 scanf("%d",&ms);
 int mss;
 printf("Enter your social science mark:");
 scanf("%d",&mss);

 int mark=mt+me+mm+ms+mss;
printf("Name of the student:%s",n);
printf("\nTotal mark is:%d\n",mark);

if(mark>=450){
    printf("Grade A");
}
else if(mark>=400){
    printf("Grade B");
}
else if(mark>=350){
    printf("Grade C");
}
else if(mark>=300){
    printf("Grade D");
}
else if(mark>=250){
    printf("Grade E");
}
else if (mark<250){
    printf("Fail");
}




return 0;
}
