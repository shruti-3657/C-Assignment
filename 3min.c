#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        printf("%d is min",a);
    else if(b<a && b<c)
        printf("%d is min\n",b);
    else
    printf("%d is min",c);
return 0;
}