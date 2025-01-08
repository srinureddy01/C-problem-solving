// friendly pair
#include<stdio.h>

int devisors(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum +=i;
        }
    }
    return sum;
}
void main()
{
    int n1=6,n2=28;
    int sum1,sum2;
    sum1=devisors(n1);
    sum2=devisors(n2);
    if(sum1/n1 == sum2/n2)
    {
        printf("its a friendly pair");
    }
    else
    {
        printf("its not a friendly pair");
    }
}
