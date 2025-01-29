 
#include <stdio.h>
void main()
{
    int x1 , x2;
    printf("Enter the ele to find the Quadrents: ");
    scanf("%d",&x1);
    scanf("%d",&x2);
    
    if(x1 < 0 && x2 > 0)
    {
        printf("%d , %d are belongs to the Quadrent 1",x1,x2);
    }
    else if (x1 > 0 && x2 > 0)
    {
        printf("%d , %d are belongs to the Quadrent 2",x1,x2);
    }
    else if (x1 < 0 && x2 < 0)
    {
         printf("%d , %d are belongs to the Quadrent 3",x1,x2);
    }
    else if (x1>0 && x2 < 0)
    {
         printf("%d , %d are belongs to the Quadrent 4",x1,x2);
    }
    
}
