//29.	Write a program to print factors of a given number. 
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\t",i);
    }
    return 0;
}