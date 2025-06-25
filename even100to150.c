#include<stdio.h>
int main()
{
    int n=150,i;
    for(i=100;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\t",i);
    }
    return 0;
}