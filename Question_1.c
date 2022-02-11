#include<stdio.h>
int main()
{
    char name[25];
    char branch[25];
    char hobbies[25];
    int  num;
    printf("Enter your Name- \n");
    scanf(" %s",&name);
    printf("Enter your Branch- \n");
    scanf(" %s",&branch);
    printf("Enter your Hobbies- \n");
    scanf(" %s",&hobbies);
    printf("Enter your Regd. No.- \n");
    scanf("%d",&num);
    printf("\nName: %s",name);
    printf("\nBranch: %s",branch);
    printf("\nHobbies: %s",hobbies);
    printf("\nRegd. No.: %d",num);
    return 0;
}