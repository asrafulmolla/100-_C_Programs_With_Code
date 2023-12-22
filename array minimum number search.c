#include<stdio.h>
int main()
{
    int a[100],i,n,min;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]< min)
        {
            min=a[i];
        }
    }
    printf("min= %d",min);
}


