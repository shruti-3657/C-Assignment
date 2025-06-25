#include<stdio.h>
int main()
{
    int n=10,i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            printf("%d\t",i);
    }
    return 0;
}