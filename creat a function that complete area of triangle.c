#include<stdio.h>

int area()
{
    int l,h;
    float area;
    printf("Enter land and hight value: ");
    scanf("%d%d",&l,&h);
    area = 0.5*l * h;
    printf("Area = %.3f",area);
}
int main()
{
     area();
}

