#include<stdio.h>
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}
int main()
{
    int x,y;
    printf("Enter value of x,y: ");
    scanf("%d%d",&x,&y);
    swap(x,y);

}
