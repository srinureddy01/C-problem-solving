// Abundant Number in C
#include<stdio.h>
int abundant(int num)
{
   int sum =0;
   for(int i=1 ; i<=num ; i++)
   {
       if(num%i==0)
       {
           printf("%d ",i);
           sum = sum + i;
       }
   }
   
   return (sum > num);
}

void main()
{
    int num = 30;
    if(abundant(num))
    {
        printf("\n its a abundant number",num);
    }
    else
    {
        printf("\n its not a abundant number",num);
    }
}
