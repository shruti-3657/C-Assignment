#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    printf("Enter number\n");
    scanf("%d",&x);
    printf("Enter number\n");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        sum=sum+i;
    }
    printf("Sum:%d",sum);
    return 0;
}