// #include<stdio.h>
// int main()
// {
//     int x,n,i,result=1;
//     printf("Enter number\n");
//     scanf("%d",&x);
//     printf("Enter number\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         result=result*x;
//     }
//     printf("%d^%d=%d",x,n,result);
//     return 0;
// }
#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    float result;
    printf("Enter number\n");
    scanf("%d",&x);
    printf("Enter number\n");
    scanf("%d",&n);
    result= pow(x,n);
    printf("%d^%d=%.1f",x,n,result);
}
