#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of celsius scale: ");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("Fahrenheit= %.3f",f);
}
