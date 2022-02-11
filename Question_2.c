#include<stdio.h>
int main()
{
    int  num1,num2;
    printf("Enter your 1st Number- \n");
    scanf("%d",&num1);
    printf("Enter your 2nd Number- \n");
    scanf("%d",&num2);
if (num1>num2)
{
    printf("Greater number is: %d",num1);
}    
else if (num1<num2)
{
    printf("Greater number is: %d",num2);
}    
    return 0;
}