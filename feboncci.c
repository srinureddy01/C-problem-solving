// feboncci series
#include<stdio.h>
int feb(int n)
{
    static int a=0,b=1,nextnum;
    if(n>0)
    {
        nextnum=a+b;
        a=b;
        b=nextnum;
        printf("%d ,",nextnum);
        feb(n-1);
    }
     
}
void main()
{
    int num=10;
    printf("0, 1 ,");
    feb(num-2);
}
