#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter  intial velocity \n");
    scanf("%f",&u);
    printf("Enter acceleration \n");
    scanf("%f",&a);
    printf("enter time \n");
    scanf("%d",&t);
    v=u+a*t;         //final velocity
    s=u+a*t*t;          //distance
    printf("final velocity:%.2f \n",v);
    printf("distance:%.2f\n",s);
    return 0;

}