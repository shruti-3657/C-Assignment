#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(a>c)?a:c;
    printf("%d is max\n",b);
return 0;
}