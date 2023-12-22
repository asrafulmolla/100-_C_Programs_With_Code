#include<stdio.h>
int main()
{
    int x=10,y=10;
    int *p;
    p=&x;
    printf("value of x= %d\n",x);
    printf("Address of x= %d\n",&x); // hexa dacmal value printf("Address of x= %x d\n",&x);
    printf("Address of p= %d\n",p);
    printf("Content of p= %d\n",*p);
    printf("Address of p variavle= %d\n",&p);
}
