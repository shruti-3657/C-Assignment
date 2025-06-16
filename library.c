#include<stdio.h>
int main()
{
    int days,fine;
    printf("Enter how many late days\n");
    scanf("%d",&days);
    if(days>10)
        fine=200;
    else if(days>=6 && days<=10)
        fine=100;
    else if(days<=5)
        fine=50;
    printf("Fine in rs:%d",fine);
 return 0;
}