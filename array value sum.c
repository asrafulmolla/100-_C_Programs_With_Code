#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }
        printf("%d ",sum);

}


