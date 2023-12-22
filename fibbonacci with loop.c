#include<stdio.h>
int main()
{
    int  n,a,b,c,i;
    a=0;
    b=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);

    }
}
