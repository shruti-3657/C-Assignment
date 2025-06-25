//23.	Write a program to accept an integer and count the number of even digits, odd and zero digits in given number.
#include<stdio.h>
int main()
{
    int n,num,count1=0,count2=0,count3=0;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        if(num%2==0)
        {
            count1++;
        }
        else if(num%2!=0)
        {
            count2++;
        }
        else 
        {
            count3++;
        }
        n=n/10;
    }
    printf("Count of even no:%d\n",count1);
    printf("Count of odd no:%d\n",count2);
    printf("Count of zero no:%d\n",count3);
    return 0;
} 