#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)       //for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of %d:%d",n,fact);
    return 0;
}