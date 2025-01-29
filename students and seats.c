#include <stdio.h>

int fact(int x)
{
    int  cal = 1;
    while(x != 0)
    {
        cal = cal * x;
        x = x -1 ;
        
    }
    return cal;
    
}




void main()
{
    int seets , number , result1 , result2;
    printf("enter the number of people: ");
    scanf("%d",&number);
    printf("Enter the number of seats: ");
    scanf("%d",&seets);
    
    // need to find the r!
    
    result1 = fact(seets);
    result2 = fact(seets - number);
    
printf("the total number of seets are %d" , result1 / result2);
}
