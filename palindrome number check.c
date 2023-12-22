#include<stdio.h>
int main()
{
    int n,r,rev=0,t;
    printf("Enter the palindrome checking number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (t==rev)

        printf("Palindrome number.");

    else
        printf("Not palindrome number.");

}
