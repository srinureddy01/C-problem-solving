//gcd
#include<stdio.h>
void main()
{
    int n1=18,n2=12;
    int low = (n1 > n2)? n2:n1, val ;
    for(int i =1 ; i<=low; i++)
    {
        if(n1%i==0&& n2%i==0)
        {
            val = i;
        }
    }
    printf("%d",val);
}
