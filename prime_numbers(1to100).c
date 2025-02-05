// prime number between 1 to 100
#include<stdio.h>

int prime_num()
{
    
     int count =0,sno=1;
    for(int i1=2 ; i1<=100; i1++ )
    {
        count =0;
        for(int i2=2 ; i2<=i1; i2++)
        {
            if(i1%i2==0)
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            printf("%d.) %d\n",sno ,i1);
            sno+=1;
        }
    }
}

int main()
{
    prime_num();
    
    return 0;
}
