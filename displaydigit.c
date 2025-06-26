//28.	Write a program which accepts a number and display each digit of number in words. 
#include<stdio.h>
int main()
{
    int n,rem,num,reverse=0;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    while(reverse>0)
    {
        num=reverse%10;
        switch(num)
        {
            case 0:
                printf("zero  ");
            break;
            case 1:
                printf("one  ");
            break;
            case 2:
                printf("two  ");
            break;
            case 3:
                printf("three  ");
            break;
            case 4:
                printf("four  ");
            break;
            case 5:
                printf("five  ");
            break;
            case 6:
                printf("six ");
            break;
            case 7:
                printf("seven ");
            break;
            case 8:
                printf("eight ");
            break;
            case 9:
                printf("nine ");
            break;
        }
        reverse=reverse/10;
    }
    return 0;
}