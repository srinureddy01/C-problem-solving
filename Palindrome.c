//Creverse number
#include<stdio.h>
void rev(int num)
{
    int sum=0, rev, num1;
    num1 = num;
    while(num!=0)
    {
        rev = num%10;
        sum = sum *10 + rev ;
        num=num/10;
        
    }
    if(sum == num1)
    {
        printf("palindrome");
    }
    else 
    printf("its not a palindrome");
    
}
void main()
{
    int num;
    num = 121;
      rev(num);
    
}
