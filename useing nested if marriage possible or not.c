#include<stdio.h>
int main()
{
    int boy, girl;
    printf("Enter the age of boy and girl years: ");
    scanf("%d%d",&boy,&girl);
    if(boy>=21 && girl>=18)
    {
            printf("Possible");
    }
    else
        printf("Not possible.");
}
