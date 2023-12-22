#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter value of day: ");
    scanf("%d",&day);
    year=day/365;
    day=day%365;
    month=day/30;
    day=day%30;
    printf("%d year %d month %d day",year,month,day);
    return 0;
}
