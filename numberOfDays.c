#include<stdio.h>
void main()
{
    int year = 2012, month = 12;
    if((month==2) && ((year%400==0) || ((year%100!=0)&&(year%4==0))))
    {
        
            printf("no. of days are 29");
        
    }
    else if (month == 2) 
    {
        printf("np. of days are 28");
    }
 
    else if(month == 1 || month == 3 ||  month == 5 ||  month == 7 ||  month == 8 ||  month == 10 ||  month == 12 )
    {
        printf("no. of days are 31");
        
    }
    else if(month==4 || month== 6 || month== 9||month==11)
    {
        printf("no of days are 30");
    }
}
