#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the finding factorial value: ");
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial= %d",fact);
}
