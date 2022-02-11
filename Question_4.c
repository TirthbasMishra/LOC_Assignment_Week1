#include<stdio.h>
int main()
{
    float num1,num2,c;
    char ch;
    printf("Enter your 1st Number- \n");
    scanf("%f",&num1);
    printf("Enter your 2nd Number- \n");
    scanf("%f",&num2);
     printf("Enter your Choice to perform an Operation- \n");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+': 
    c=num1+num2;
    printf("Output=%f",c);
        break;
    case '-':
    c=num1-num2;
    printf("Output=%f",c);
        break;
    case '*': 
    c=num1*num2;
    printf("Output=%f",c);
        break;
    case '/': 
    c=num1/num2;
    printf("Output=%f",c);
        break;        
    default:
    printf("invalid Operation");
        break;
    }
    return 0;
}