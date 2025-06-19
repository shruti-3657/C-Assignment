#include<stdio.h>
int main()
{
    int x,y, q,r,option,n;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&x,&y);
    printf("choose option\n");
    printf("\n 1.Equality");
    printf("\n 2. Less than");
    printf("\n 3. Quotient and Remainder");
    printf("\n 4. Range");
    printf("\n 5. Swap");
    printf("\n Enter Options:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        if(x==y)
            printf("x is equal to y");
        else
            printf("x is not eqaul to y");
        break;
        case 2:
        if(x < y)
            printf("x is less than y");
        else
            printf("x is not less than y");
        break;
        case 3:
        if(y!=0)
        {
            q=x/y;
            r=x%y;
            printf("Quotient:%d Remainder:%d ",q,r);
        }
        else
            printf("Division by zero not allowed");
        break;
        case 4:
        printf("Enter Number to check range\n");
        scanf("%d",&n);
        if((n>=x && n<=y)||(n>=y && n<=x))
            printf("%d  lies between %d  and %d",n,x,y);
        else
            printf("%d not lies between  %d  and %d",n,x,y);
        break;
        case 5:
        printf("before swap x:%d y:%d \n",x,y);
        x=x+y;
        y=x-y;
        x=x-y;
        printf("after swap x:%d y:%d \n",x,y);
        break;
    }
return 0;
}