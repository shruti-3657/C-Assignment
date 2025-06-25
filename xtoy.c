#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter x \n");
    scanf("%d",&x);
    printf("enter y \n");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}