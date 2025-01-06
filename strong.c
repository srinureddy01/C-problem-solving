// strong number
#include<stdio.h>
int  factor(int num)
{
    if(num==0)
    return 1;
    
    return num * factor(num-1);
}
int order(int num)
{  
    int len=0;
    while(num != 0)
    {
        num = num/10;
        len = len+1;
    }
    return len;
}

void main()
{
    int num = 145, result=0, len,val,temp=0;
    temp=num;
    len = order(num);
    for(int i =1 ; i<=len ;i++ )
    {
        val = num %10;
        num =num / 10;
        result = result + factor(val);
    }
    if(temp == result){
        printf("%d is a strong number",temp);
    }
    else
    {
        printf(" %d is not a strog number",temp);
    }
    
     
     
}
