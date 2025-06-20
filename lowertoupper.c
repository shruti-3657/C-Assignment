#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,up;
    printf("enter letter\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        up=tolower(ch);
        printf("lower case:%c",up);
    }
    else
        printf("upper case:%c",ch);
 return 0;
}