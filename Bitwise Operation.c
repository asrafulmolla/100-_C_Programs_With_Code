// AND = &, OR = |, X-OR = ^, NOT ~ ,Left shift << ,Right shift >>.
#include<stdio.h>
int main()
{
    int a=10,b=7,c=9,x,y,z,m,p,q;
    x=a&b;
    m=a|b;
    p=a^c;
    q= ~a;
    y=a<<2;
    z=b>>1;
    printf(" x=%d,\n m=%d, \n p=%d, \n q=%d, \n y=%d, \n z=%d",x,m,p,q,y,z);
    return 0;
}
