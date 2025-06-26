//32.	Write a program to print, count and sum of factors 
#include<stdio.h>
int main()
{
    int n,sum=0,count=0,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            sum=sum+i;
            count++;
        }
    }
    printf("sum:%d\n",sum);
    printf("count:%d",count);
}