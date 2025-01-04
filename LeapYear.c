// leap year or not 
#include<stdio.h>
int leap(int year)
{
    if (year%400==0 )
    {
        printf("leap year");
    }
    else if(year%4==0 & year%100!=0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
void main()
{
    int year;
    scanf("%d",&year);
    leap(year);
}
