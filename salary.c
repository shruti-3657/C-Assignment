#include<stdio.h>
int main()
{
    int bs,tax,total;
    printf("Enter Basic salary\n");
    scanf("%d",&bs);
    if(bs>300000)
        tax=30;
    else if(bs>=150000 && bs<300000)
        tax=20;
    else if(bs<150000)
        tax=0;
    total=bs*tax/100;
    printf("Tax In (%%):%d\n",tax);
    printf("tax in rs:%d",total);
return 0;
}