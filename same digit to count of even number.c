#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the same digit: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
            sum++;
        n=n/10;
    }
    printf("Total Even number: %d",sum);
}
