//33.	Write a program to check whether a given number is perfect number
#include<stdio.h>
int main()
{
    int n,temp,i,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(temp==sum)
        printf("%d is perfect No",temp);
    else
        printf("%d is  not perfect No",temp);
    return 0;

}