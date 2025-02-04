#include<stdio.h>

void main()
{
    int num = 124098;
    int num2 , cal=0;
    if(num == 0)
    printf("%d",1);
    
    while(num>0)
    {
        num2 = num%10;
        if(num2==0)
        num2 = 1;
        
        cal = cal * 10 + num2;
        num = num / 10;
        
    }
    num =0;
    while(cal > 0)
    {
        int r = cal%10;
        num = num * 10 + r;
        cal = cal / 10;
    }
    printf("%d",num);
}
