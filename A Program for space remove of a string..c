#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c=0;
    printf("Enter a string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]!=' ')
        s[c++]=s[i];
    }
    s[c]='\0';
    puts(s);
}
