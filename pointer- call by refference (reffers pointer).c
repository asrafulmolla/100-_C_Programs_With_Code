#include<stdio.h>
int swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("%d %d",a,b);
}
int main()
{
    int x,y;
    printf("Enter value of x,y: ");
    scanf("%d%d",&x,&y);
    swap(&x,&y);

}

