#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the number of student: ");
    scanf("%d",&mark);
    if(mark>=80)
        printf("A+");
    else if(mark>=70)
        printf("A");
    else if(mark>=60)
        printf("B");
    else if(mark>=50)
        printf("C");
    else
        printf("F");
    return 0;
}
