//hcf
#include<stdio.h>
int hcf(int n1 , int n2)
{
    int high_value=0;
    for(int i=1; i<=n1 || i<=n2 ; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            high_value = i;
        }
    }
    return high_value;
}
void main()
{
    int n1=36,n2=60,result;
    result=hcf(n1,n2);
    printf("the hcf of %d,%d is %d",n1,n2,result);
}
