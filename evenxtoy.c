#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter number\n");
    scanf("%d",&x);
    printf("Enter number\n");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
            printf("%d\t",i);
    }
    return 0;
}