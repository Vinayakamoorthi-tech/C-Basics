#include <stdio.h>
int main() {
    char name[50];
    char email_id[79];
    char address[100];
    char mobile_number[20];
    int sslc_mark, hsslc_mark_one, hsslc_mark_two;
    char hobby[80];
    char skill[90];
    char certificate[80];
    char pin_number[20];
    char college[50];
    char project[40];

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your pin number: ");
    scanf("%s", pin_number);
    printf("Enter your email id: ");
    scanf("%s", email_id);
    printf("Enter your mobile number: ");
    scanf("%s", mobile_number);
    printf("Enter your address: ");
    scanf(" %[^\n]", address);
    printf("Enter your 10th mark: ");
    scanf("%d", &sslc_mark);
    printf("Enter your 11th mark: ");
    scanf("%d", &hsslc_mark_one);
    printf("Enter your 12th mark: ");
    scanf("%d", &hsslc_mark_two);
    printf("Enter your college name: ");
    scanf(" %[^\n]", college);
    printf("Enter your certificate name: ");
    scanf("%[^\n]", certificate);
    printf("Enter your project name: ");
    scanf(" %[^\n]", project);
    printf("Enter your skill: ");
    scanf(" %[^\n]", skill);
    printf("Enter your hobby: ");
    scanf(" %[^\n]", hobby);

    printf("\n__________ Bio Data __________\n");
    printf("Name: %s\n", name);
    printf("Pin Number: %s\n", pin_number);
    printf("Email ID: %s\n", email_id);
    printf("Mobile Number: %s\n", mobile_number);
    printf("Address: %s\n", address);
    printf("\n_________ Education Qualification _________\n");
    printf("10th Mark: %d\n", sslc_mark);
    printf("11th Mark: %d\n", hsslc_mark_one);
    printf("12th Mark: %d\n", hsslc_mark_two);
    printf("College Name: %s\n", college);
    printf("\n_________ Experience Details _________\n");
    printf("Certificate: %s\n", certificate);
    printf("Project: %s\n", project);
    printf("\n_________ Special Skills _________\n");
    printf("Skill: %s\n", skill);
    printf("Hobby: %s\n", hobby);

    printf("\n-------------Thank You--------------\n");

    return 0;
}



