
#include <stdio.h>

int fibbonacci(int n)
  {
   if(n == 0)
      return 0;
   else if(n == 1)
      return 1;
   else
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }

int main()
{
   int i,n;
   printf("Enter the nth value of fibbonacci series: ");
   scanf("%d",&n);
   for(i = 0;i<n;i++)
   {
      printf("%d ",fibbonacci(i));
   }
}
