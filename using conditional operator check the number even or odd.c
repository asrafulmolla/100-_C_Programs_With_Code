#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of number: ");
    scanf("%d",&n);
    (n%2==0)?printf("Even."):printf("Odd.");// ?= condition of 'if' & : = condition of 'else'.
}
