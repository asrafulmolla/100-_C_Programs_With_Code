#include<stdio.h>
int main()
{
    int a=10,b=33,c=5,x,y,z;
    x= ++a - b-- + ++c;
    y= x++ - c++ + --x;
    z= y++ + x-- + ++b;
    printf("a=%d,b=%d,c=%d,x=%d,y=%d,z=%d",a,b,c,x,y,z);
    return 0;
}
