#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    printf("before swapping a:%d b:%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a:%d b:%d",a,b);
    return 0;
}
