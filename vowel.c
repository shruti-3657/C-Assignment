#include<stdio.h>
int main()
{
    char ch;
    printf("enter lower case character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("vowel\n");
        else
            printf("not vowel\n");
    else
        printf("enter lower case\n");
return 0;

}