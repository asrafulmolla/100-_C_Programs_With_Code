
#include<stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n%10 + sum(n/10));
}

int main()

{
    int b, result;
    scanf("%d",&b);
    result = sum(b);
    printf("result = %d",result);

}
