#include<stdio.h>

int add()
{
    int a, b, sum;
    printf("Enter a and b value: ");
    scanf("%d%d",&a,&b);
    sum = a + b;
    return sum;
}
int main()
{
     printf("sum = %d",add());
}
