//C Program to Find Sum of Digits of a Number
#include<stdio.h>
void sum(int num)
{
    int sum=0, rev;
    while(num!=0)
    {
        rev = num%10;
        sum +=rev;
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
