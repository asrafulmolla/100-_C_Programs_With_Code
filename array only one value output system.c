#include<stdio.h>
int main()
{
    int a[100],i,n,s;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a position of search value: ");
    scanf("%d",&s);

        printf("%d ",a[s]);

}


