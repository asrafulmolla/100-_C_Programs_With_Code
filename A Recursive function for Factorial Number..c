#include<stdio.h>

int fact(int n)
{
   if (n == 0)
        return 1;
    else
        return n* fact(n-1);
}

int main()

{
    int num, result;
    printf("Enter checking a factorial value: ");
    scanf("%d",&num);
    result = fact(num);
    printf("fact = %d",result);
}
