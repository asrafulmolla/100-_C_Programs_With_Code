#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c=0;
    printf("Enter vowel count woard: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
            c++;
    }
    printf("Total vowel= %d",c);
}
