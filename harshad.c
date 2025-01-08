//harshad number
#include<stdio.h>
int harshab(int num)
{
    int rev,sum=0,temp=num;
    while(temp != 0)
    {
        rev = temp %10;
        sum = sum + rev;
        
        temp /=10;
    }
    return num%sum == 0;
    
}

void main()
{
    int num = 21;
    if(harshab(num))
    {
        printf("%d is a harshab number",num);
    }
    else
    {
        printf("%d is not a harshab number",num);
    }
}
