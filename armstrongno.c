//25.	Write a program to check whether a given number is Armstrong number. 
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,count=0,rem;
    float result=0;
    printf("Enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        result=result+pow(rem,count);
        n=n/10;
    }
    if(result==temp)
        printf("%d is Armstrong number\n",temp);
    else
        printf("%d is  not Armstrong number\n",temp);
    return 0;
}