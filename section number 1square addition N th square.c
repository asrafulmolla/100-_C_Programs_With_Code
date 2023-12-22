#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter value of n th number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum= %d",sum);
}
