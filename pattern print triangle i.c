#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of size triangle: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d  ",i);
        }
        printf("\n");
    }
}

