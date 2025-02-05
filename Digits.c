#include<stdio.h>
void main()
{
    int count =0,num = 34545;
    while(num>0)
    {
        count +=1;
        num = num / 10;
    }
    
    printf("The number of digits  is %d ",count);
}
