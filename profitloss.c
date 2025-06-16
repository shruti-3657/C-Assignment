#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("enter cost price  \n");
    scanf("%d",&cp);
    printf("enter selling price\n");
    scanf("%d",&sp);
     if(cp>sp)
    {
        printf("loss");
        loss=cp-sp;
        printf("Loss:%d \n",loss);
    }
    else 
    {
        printf("profit \n");
        profit=sp-cp;
        printf("profit:%d",profit);
    }
    return 0;

}