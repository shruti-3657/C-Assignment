#include<stdio.h>
int main()
{
    int hour,min,sec;
    printf("Enter hour\n");
    scanf("%d",&hour);
    printf("Enter min\n");
    scanf("%d",&min);
    printf("Enter second\n");
    scanf("%d",&sec);
    if(hour>=0 && hour<24 && min>=0 && min<60 && sec>=0 && sec<60)
        printf("Valid time\n");
    else
        printf("Invalid Time\n");
return 0;
}