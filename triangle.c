#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter  3 sides of triangle\n ");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
return 0;

}