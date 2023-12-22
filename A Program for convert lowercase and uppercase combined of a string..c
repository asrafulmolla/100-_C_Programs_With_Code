#include <stdio.h>

#include <string.h>

int main()
{
   char s[100];
   int i;
   printf("Enter a string lowercase and uppercase combined: ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++)
    {
      if(s[i] >= 'A' && s[i] <= 'Z')

         s[i] = s[i] + 32;
    else
        s[i] = s[i] - 32;

    }
   printf("String in = %s", s);

   return 0;
}


