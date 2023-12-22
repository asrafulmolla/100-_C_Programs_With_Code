#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter a n: ");
    scanf("%d",&n);
    printf("Enter a skip value: ");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
        if(i==s)
            continue;
             printf("%d  ",i);
    }
}


