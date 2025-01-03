 //Sum of numbers in a given range
 #include<stdio.h>
 void main()
 {
     int n , i=0,sum=0;
     scanf("%d",&n);
     while(i<=n)
     {
         sum += i;
         i=i+1;
     }
     printf("the sum of %d numbers is: %d",n,sum);
 }
