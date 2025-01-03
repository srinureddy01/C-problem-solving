 //Greatest of two numbers:
 #include<stdio.h>
 int Callfun();
 void main()
 {
     int number1,number2, number3, result;
     scanf("%d",&number1);
     scanf("%d",&number2);
     scanf("%d",&number3);
    result =  Callfun(number1 , number2, number3);
    printf("grated of %d , %d and %d is : %d",number1,number2, number3,result);
     
 }
 
 int Callfun(int n1,int  n2, int n3)
 {
     if (n1 < n3 & n2 < n3 )
     {
         return n3;
     }
     else if (n1 < n2 & n3 < n2  )
     {
         return n3;
     }
     else if (n2 < n1 & n3 < n1 )
     {
         return n1;
     }
     else if (n1 == n2 & n2 == n3 )
     {
         printf("three numbes are same\n");
         return n1;
     }
 }
