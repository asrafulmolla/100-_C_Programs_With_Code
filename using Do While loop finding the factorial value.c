#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the value finding factorial : ");
    scanf("%d",&n);
    do
    {
        fact=fact*n;
        n--;
    }
    while(n>0);
    {
        printf("Factorial= %d",fact);
    }
}
