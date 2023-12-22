#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter n= ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        //printing space
        for(c=1;c<=n-r;c++)
            printf(" ");
        //printing stars
        for(c=1;c<=2*r-1;c++)
            printf("*");
        printf("\n");
    }
}
