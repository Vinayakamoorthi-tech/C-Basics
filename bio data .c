int main(){

//name
char name[50];
printf("Enter your name :");
scanf("%s",name);
//date of birth
char dob[11];
printf("Enter your DOB:");
scanf("%s",dob);
//gender
char gen[10];
printf("Enter your gender:");
scanf("%s",gen);
//nationality
char nat[10];
printf("Enter your nationality:");
scanf("%s",nat);
//mobile number
char num[10];
printf("Enter your mobile number:");
scanf("%s",num);
//address
char add[100];
printf("Enter your address:");
scanf("%s",add);
//12th mark
int mar12;
printf("Enter your 12th mark:");
scanf("%d",&mar12);
//10th mark
int mar10;
printf("Enter your 10th mark:");
scanf("%d",&mar10);
//matiral status
char mari[15];
printf("Enter your marital status:");
scanf("%s",mari);
//colllege
char clg[50];
printf("Enter your college name:");
scanf("%s",clg);
//department
char dep[50];
printf("Enter your department:");
scanf("%s",dep);
//soft skills
char soft[50];
printf("Enter your soft skills:");
scanf("%s",soft);
//hard skills
char hard[50];
printf("Enter your hard skills:");
scanf("%s",hard);
//technical skills
char tech[50];
printf("Enter your technical skills :");
scanf("%s",tech);




printf("                                     ***BIO DATA***");
printf("\n                      ");
printf("\nPERSONAL DETAILS");
printf("\n                      ");
printf("\nNAME:%s",name);
printf("\nDOB:%s",dob);
printf("\nGENDER:%s",gen);
printf("\nMOBILE NUMBER:%s",num);
printf("\nADDRESS:%s",add);
printf("\nMARITAL STATUS:%s",mari);
printf("\n                          ");
printf("\n------------------------------");
printf("\n                         ");
printf("\nEDUCATIONAL DETAILS");
printf("\n                             ");
printf("\n12th MARK:%d",mar12);
printf("\n10th MARK:%d",mar10);
printf("\nCOLLEGE NAME:%s",clg);
printf("\nDEPARTMENT:%s",dep);
printf("\n                            ");
printf("\n------------------------------");
printf("\n                             ");
printf("\nPERSONAL SKILLS");
printf("\n                             ");
printf("\nSOFT SKILLS:%s",soft);
printf("\nHARD SKILLS:%s",hard);
printf("\nTECHNICAL SKILLS:%s",tech);
printf("\n                             ");
printf("\n------------------------------");
printf("\n                              ");
return 0;
}
