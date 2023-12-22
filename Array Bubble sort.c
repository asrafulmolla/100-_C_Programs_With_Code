#include<stdio.h>
int main()
{
    int a[100],i,j,t,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
    {
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    }
    }
    printf("\nsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

