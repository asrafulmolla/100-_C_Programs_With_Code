#include<stdio.h>
int main()
{
    float r,a,area;
    printf("Enter value of r: ");
    scanf("%f",&r);
    printf("Enter value of a: ");
    scanf("%f",&a);
    area = 3.1416 * r * r - a * a;
    printf("Deff Area= %f",area);
    return 0;
}


