 
 #include<stdio.h>
 void main()
 {
     int n1,n2,d1,d2;
     n1 = 1;
     d1 = 3;
     n2 = 3;
     d2 = 9;
     
     int x , y, gcd;
     
     x = (n1 * d2) + (n2 * d1);
     y = d1*d2;
     
     for(int n = 1 ; n <= x && n <= y ; ++n)
     {
         if(x%n == 0 && y %n == 0 )
         gcd = n ;
         
     }
     printf("%d / %d ", x/gcd, y/gcd);
 }
