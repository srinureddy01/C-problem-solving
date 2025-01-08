#include<stdio.h>
int main()
{
    int n1=144,n2=32,hcf=1;
    while(n1 != n2)
    {
        if(n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2-n1;
        }
    }
    printf("%d",n2);
return 0;
}
