//34.	Write a program to check whether a given number is prime number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==0)
        printf("%d is prime No",n);
    else
        printf("%d is  not prime No",n);
    return 0;
}