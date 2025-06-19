#include<stdio.h>
int main()
{
    float a,b,n;
    char op;
    printf("Enter number\n");
    scanf("%f",&a);
    printf("Enter operator\n");
    scanf(" %c",&op);
    printf("Enter number\n");
    scanf("%f",&b);
    switch(op)
    {
        case '+':
        n=a+b;
        break;
        case '-':
        n=a-b;
        break;
        case '*':
        n=a*b;
        break;
        case '/':
        n=a/b;
        break;
    
    }
    printf("%.1f %c %.1f = %.1f",a,op,b,n);
}