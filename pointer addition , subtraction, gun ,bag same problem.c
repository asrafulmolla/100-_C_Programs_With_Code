#include<stdio.h>
int main()
{
    int x,y,sum;
    int *ptr1,*ptr2;
    printf("Enter the value of x and y:  ");
    scanf("%d%d",&x,&y);
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2; // " subtraction -,multiplication *, division / "
    printf("sum = %d",sum);
}

