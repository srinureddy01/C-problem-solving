#include<stdio.h>
int counting(long int num,int find)
{
    int count=0,a;
    while(num>0)
    {
        a = num % 10;
        if(find == a)
        {
            count=count +1;
        }
        num=num/10;
    }
    return count;
}
void main()
{
    long int num=  95450;
    int count, find=9;
    count = counting(num , find);
    printf("the number %d was habing the %d of %d's",num,count,find);
}
