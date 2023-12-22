#include<stdio.h>
int area()
{
    int a,area;
    printf("Enter value of a: ");
    scanf("%d",&a);
    area=a*a;
    printf("Area= %d",area);
}
int main()
{
    area();
}
