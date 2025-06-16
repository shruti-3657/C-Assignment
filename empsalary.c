#include<stdio.h>
int main()
{
    int eid;
    float bs;
    float tsalary;
    int tax=5,da=30,hra=10;
    printf("Enter employee id \n");
    scanf("%d",&eid);
    printf("Enter basic salary \n");
    scanf("%f",&bs);
    tsalary=bs+((bs*(da+hra-tax))/100);
    printf("Home salary of the employee:%.2f",tsalary);
    return 0;
    
}