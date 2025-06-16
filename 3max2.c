#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        b=a;
    else if(c>b)
        b=c;
printf("%d is max",b);
}