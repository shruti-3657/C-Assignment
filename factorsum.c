//30.	Write a program to print sum of factors of a given number 
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    printf("Sum of %d factors:%d",n,sum);
    return 0;
}