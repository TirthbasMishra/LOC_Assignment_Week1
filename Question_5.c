#include<stdio.h>
int main()
{
    float radius,D,C,A;
    char ch;
    printf("Enter the Radius of the circle:-");
    scanf(" %f",&radius);
    printf("Enter your choice:-");
    scanf(" %c",&ch);
    switch (ch)
    {
    case 'D':
    D = radius * 2;
    printf("Diameter:-%f",D);
    scanf("%f",D);
    break;

    case 'C' :
    C = 2 * radius * 3.14;
    printf("Circumference:-%f",C);
    scanf("%f",C);
    break;

    case 'A' :
    A = 3.14 * radius * radius;
    printf("Area:-%f",A);
    scanf("%f",A);
    break;

    default :
    printf("invalid Operation");
     break;
    }
}