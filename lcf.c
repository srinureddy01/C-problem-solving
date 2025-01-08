 //lcf
 #include<stdio.h>
 int lcf(int n1, int n2)
 {
     int max = (n1 > n2)? n1 : n2 , num;
     
     for(int i = max ; i <= n1*n2 ; i++)
     {
         if(i % n1 == 0 && i%n2 == 0  )
         {
             num = i ;
             break;
         }
     }
     return  num;
}
 void main()
 {
     int n1 = 36, n2 =60, result;
     result = lcf(n1,n2);
     printf("%d",result);
 }
