//24.	Write a program to find sum of digits of given number. 
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("Sum:%d",sum);
    return 0;
}