// automorphic numbre
#include<stdio.h>
int last_num(int n)
{
    int sqr = n*n;
    while(n != 0 )
    {
        if(n % 10 != sqr % 10)
        {
            return 0;
        }
         
            n = n/10;
            sqr = sqr / 10;
        
        
    }
    return 1;
}
void main()
{
    int n=376, sqr = n*n;
    
    if( last_num(n) )
    {
        printf("%d is a automorphic number and sqr: %d",n,sqr);
    }
    else
    {
        printf("%d is not a automorphic number and sqr: %d",n,sqr);
    }
    
    
}
