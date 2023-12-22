#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of 1 to n th number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
}

