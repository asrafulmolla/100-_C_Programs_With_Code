#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the 1 to n th number value: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum= %d",sum);
}
