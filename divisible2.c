#include<stdio.h>
int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    if(num % 5==0 && num%7==0)
        printf("number is divisible by 5 and 7");
    else
        printf("not divisible 5 and 7");
return 0;

}