#include<stdio.h>
int main()
{
    int a[100],i,n,max;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max= %d",max);
}

