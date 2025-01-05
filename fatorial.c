//factorial of a given numner
#include<stdio.h>
int func(int n)
{
    if(n==0)
    return 1;
    
    return n*func(n-1);
}
void main()
{
    int n =5,result;
    result=func(n);
    printf("%d",result);
}
