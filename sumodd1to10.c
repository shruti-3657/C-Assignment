#include<stdio.h>
int main()
{
    int n=10,i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
             sum=sum+i;
    }
    printf("Sum of 1 to 10:%d",sum);
    return 0;
}