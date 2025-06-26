//27.	Write a program to check whether given number if palindrome number
#include<stdio.h>
int main()
{
    int n,rem,temp,reverse=0;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;   
    }
    
    if(temp==reverse)
        printf("%d palindrome no",temp);
    else
        printf("%d not palindrome",temp);
    return 0;
}