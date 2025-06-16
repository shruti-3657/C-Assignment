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
    if(hour>=0 && hour<24)
        if(min>=0 && min<60)
            if(sec>=0 && sec<60)
                printf("Valid time");
            else
                printf("Invalid second");
        else
            printf("invalid min");
    else
        printf("invalid hours");
return 0;
}