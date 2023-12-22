#include<stdio.h>
int main()
{
    int i,n,l;
    printf("Enter a n: ");
    scanf("%d",&n);
    printf("Enter a limit value: ");
    scanf("%d",&l);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",i);
        if(i==l)
            break;
    }
}
