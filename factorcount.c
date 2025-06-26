//31.	Write a program to count factors of a given number 
#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    printf("Counts :%d",count);
    return 0;
}