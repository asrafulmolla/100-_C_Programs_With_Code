#include<stdio.h>
int main()
{
    int binary,decimal=0,j=1,rem;
    printf("Enter binary value: ");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*j;
        j=j*2;
        binary=binary/10;
    }
    printf("Decimal value: %d",decimal);
}
