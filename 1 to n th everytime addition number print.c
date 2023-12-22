#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value 1 to n th number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum= sum+i;
        printf(" %d ",sum);
    }

}
