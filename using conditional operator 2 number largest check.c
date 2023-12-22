#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    (a>b)? printf("A is big.") : printf("B is big");
    return 0;
}
