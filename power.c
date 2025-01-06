// power of a number
#include<stdio.h>
int power(int base , int expo)
{
    
    if(expo == 0)
    return 1;
   
    return base * power(base , expo-1);
}
int main()
{
    int base, expo,result;
    scanf("%d %d",&base,&expo);
    result = power(base, expo);
    printf("%d ^ %d = %d",base , expo ,result);
    return 0;
}
