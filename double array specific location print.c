#include<stdio.h>
int main ()
{
    int a[3][3],i,j;
    printf("Enter double array value: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("%d",a[1][1]);       //00 01 02 10 11 12 20 21 22

}

