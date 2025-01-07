// perfect number
#include<stdio.h>

void main()
{
    int num = 30,sum=0;
    for(int i =1 ; i<= num ; i++)
    {
        if(num %i==0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
            {
                printf("\n %d is a perfect number",num);
            }
    else
    {
        printf("\n %d is not a perfrct number", num);
    }
    
}
