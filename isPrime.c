// leap year or not 
#include<stdio.h>
int prime(int p)
{
    int sum=0;
    for(int i =1;i<=p;i++)
    {
        if(p%i==0)
        {
            sum +=1;
        }
         
    }
    if(sum == 2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}
void main()
{
    int num;
    scanf("%d",&num);
    prime(num);
}
