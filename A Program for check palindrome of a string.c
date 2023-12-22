#include <stdio.h>

#include <string.h>

int main()
{
   char s[100], r[100];
   printf("Enter the string for palindrome check \n");
   gets(s);
   strcpy(r, s);
   strrev(r);
   if(strcmp(s, r) == 0 )
      printf("%s is a palindrome.\n", s);
   else
      printf("%s is not a palindrome.\n", r);
   return 0;
}
