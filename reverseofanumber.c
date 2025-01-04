//Creverse number
#include<stdio.h>
void sum(int num)
{
    int sum=0, rev;
    while(num!=0)
    {
        rev = num%10;
        sum = sum *10 + rev ;
        num=num/10;
        
    }
    printf("%d",sum);
    
}
void main()
{
    int num;
    num = 123456;
    sum(num);
}
