// prime number at the given range
#include<stdio.h>
int is_prime(int num)
{
    int sum =0;
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            sum+=1;
        }
    }
    if(sum==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int print_prime(int n1,int n2)
{
    int result;
    for(int i =n1; i<=n2 ; i++)
    {
        result = is_prime(i);
            
        if(result)
        {
            printf("%d ",i);
        }
    }
}
void main()
{
    print_prime(1,10);
    
}
