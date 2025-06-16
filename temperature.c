#include<stdio.h>
int main()
{
    float f,cel,k;
    printf("enter temperature in Fahrenheit \n");
    scanf("%f",&f);
    cel=0.5*(f-32);
    k=cel+273.15;
    printf("in Celsius:%.2f",cel);
    printf("in kelvin:%.2f",k);
    return 0;
    
}