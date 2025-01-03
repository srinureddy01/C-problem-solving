 //Greatest of two numbers:
 #include<stdio.h>
 int Callfun();
 void main()
 {
     int number1,number2, result;
     scanf("%d",&number1);
     scanf("%d",&number2);
    result =  Callfun(number1 , number2);
    printf("grated of %d and %d is : %d",number1,number2,result);
     
 }
 
 int Callfun(int n1,int  n2)
 {
     if (n1 < n2 )
     {
         return n2;
     }
     else if (n1 == n2 )
     {
         printf("both are equal");
         return n1;
     }
     else
     {
         return n1;
     }
 }
