#include<stdio.h>
int  main()
{
    int n,r,rev=0;
    printf("Enter a same value: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev++;
        n=n/10;
    }
    printf("Total digit: %d",rev);
}
