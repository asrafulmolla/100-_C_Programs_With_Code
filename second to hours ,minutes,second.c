#include<stdio.h>
int main()
{
    int sec,min,hour;
    printf("Enter value of second: ");
    scanf("%d",&sec);
    hour=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("%d Hours %d minute %d second",hour,min,sec);
    return 0;
}
