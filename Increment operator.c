#include<stdio.h>
int main()
{
    int x=10,y=9,a;
    a= ++x + y++ ;
    printf(" a=%d, \n x=%d, \n y=%d",a,x,y);
    return 0;
}
