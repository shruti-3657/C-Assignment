// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("Enter number\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     printf("sum of 1 to %d:%d",n,sum);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter number\n");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum :%d",sum);
    return 0;

}