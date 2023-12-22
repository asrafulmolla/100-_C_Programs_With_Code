
#include<stdio.h>
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int m, n, result;
    printf("Enter m & n value: ");
    scanf("%d%d",&m,&n);

    result = add(m,n);

    printf("sum = %d",result);
}
