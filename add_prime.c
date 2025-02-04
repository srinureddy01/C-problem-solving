//add the prime elements to get the input 
#include<stdio.h>
int array_ele[90];
 
int prime_number(int num)
{
    int count;
    int i2=0;
    for(int i =1 ; i<= num ; i++)
    {
        count =0;
        for(int i1 = 1 ; i1 <= i ; i1++)
        {
            if(i%i1==0)
            {
                count = count +1;
            }
        }
        if(count == 2)
        {
             
            array_ele[i2]=i;
            i2+=1;
        }
    }
    int n = sizeof(array_ele) / sizeof(array_ele[0]);
    return n;
}

int cal(int input, int len, int* rs, int* rd) {
    for (int i = 0; i < len; i++) {
        for (int i1 = 0; i1 < len; i1++) {
            if (array_ele[i] + array_ele[i1] == input) {
                *rs = array_ele[i];
                *rd = array_ele[i1];
                return 1;
            }
        }
    }
    return 0;
}
 
int  main()
{
    int input;
    printf("Enter the ele here: ");
    scanf("%d",&input);
   int n =  prime_number(input);
   printf("total number of ele in the array was %d\n",n);
   int rs , rd ;
   if(cal(input,n,&rs,&rd))
   {
   printf("%d + %d = %d",rs,rd,rs+rd);
   }
   else{
       printf("Elememts are not found");
   }
    
    
}
