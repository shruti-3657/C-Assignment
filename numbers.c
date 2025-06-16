#include<stdio.h>
int main()
{
    float a,b,am,hm;
    printf("Enter 2 numbers \n");
    scanf("%f%f",&a,&b);
    am=(a+b)/2;
    hm=(a*b)/(a+b);
    printf("arithmetic mean:%.2f\n",am);
    printf("harmonic mean:%.2f \n",hm);
    return 0;
}