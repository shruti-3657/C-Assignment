#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);
    if(ch>=48 && ch<=58)
        printf("%c is digit",ch);
    else if(ch>=97 && ch<=122)
        printf(" %c in lower case",ch);
    else if(ch>=65 && ch<=90)
        printf("%c in upper case",ch);
return 0;
}