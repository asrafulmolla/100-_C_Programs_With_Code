#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is big.");
    }
    else
        printf("b is big.");
    return 0;
}

