#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is greater than %d and %d \n",a,b,c);
    else if(b>a && b>c)
        printf("%d is greater than %d and %d \n",b,a,c);
    else 
        printf("%d is greater than %d and %d \n",c,a,b);
return 0;
}