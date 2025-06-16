#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if(number% 5==0)
        if(number %7==0)
            printf("Number is divisible 5 and 7\n");
        else
            printf("not divisible 5 and 7");
    else
        printf("not divisible 5 and 7");
return 0;
}