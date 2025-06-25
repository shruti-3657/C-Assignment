//21.	Write a program that accepts a number and print it’s all digits
#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("%d   ",rem);
        n=n/10;
    }
    return 0;
}