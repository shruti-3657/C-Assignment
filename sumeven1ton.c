#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
    printf("Sum :%d",sum);
    return 0;
}