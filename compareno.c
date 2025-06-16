#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Enter 2 Numbers\n");
    scanf("%f%f",&n1,&n2);
    if(n1==n2)
        printf("Numbers are equal\n");
    else if(n1>n2)
        printf("Number 1 is greater than number 2\n");
    else
        printf("Number 2 is greater than number 1\n");
return 0;
}