#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    printf("previous character is:%c \n",ch-1);
    printf("next character is:%c \n",ch+1);
    return 0;
}