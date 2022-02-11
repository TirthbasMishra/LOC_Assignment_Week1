#include<stdio.h>
int main()
{
    int  num;
    printf("Enter your Number- \n");
    scanf("%d",&num);
    switch (num%2==0)
    {
    case 1:
    printf("The number is Even: %d",num);
        break;
    default:
    printf("The number is Odd: %d",num);
        break;
    }
    return 0;
}