#include<stdio.h>
int main()
{
    int p1,p2,p3,qty1,qty2,qty3,total,dis,disamt;
    printf("Enter Price:\n");
    scanf("%d",&p1);
    printf("Enter Quantity:\n");
    scanf("%d",&qty1);
    printf("Enter Price:\n");
    scanf("%d",&p2);
    printf("Enter Quantity:\n");
    scanf("%d",&qty2);
    printf("Enter Price:\n");
    scanf("%d",&p3);
    printf("Enter Quantity:\n");
    scanf("%d",&qty3);
    total=(p1*qty1)+(p2*qty2)+(p3*qty3);
    if(total>100000)
        dis=20;
    else if(total<100000 && total>50000)
        dis=15;
    else if(total<50000 && total>20000)
        dis=8;
    else
        dis=0;
    disamt=total*dis/100;
    printf("Total Amount:%d\n",total);
    printf("Discount:%d%%\n",dis);
    printf("Paying Amount:%d\n",(total-disamt));
return 0;

}