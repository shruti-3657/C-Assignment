#include<stdio.h>
int main()
{
    int m1,m2,m3,total,avg;
    printf("Enter marks\n");
    scanf("%d",&m1);
    printf("Enter marks\n");
    scanf("%d",&m2);
    printf("Enter marks\n");
    scanf("%d",&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("Total:%d\n",total);
    printf("avg:%d\n",avg);    
    if(avg>70)
        printf("Grade:Class I");
    else if(avg<70 &&avg>60)
        printf("Grade:Clss II");
    else if(avg<60 &&avg>35)
        printf("Grade:Pass");
    else
        printf("Grade:Fail");
return 0;
}