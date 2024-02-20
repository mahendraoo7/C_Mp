#include <stdio.h>
 int fact(int n);
 
 int fact(int n)
 {
   int ans,i;
	
  
  if(n<=1)
  {
    return 1;
  }	else
  {  
  ans = n*fact(n-1);
   
   return ans;
 
  }
  }
 void main ()
 {
   int n,s;
   scanf("%d",&n);
 
   s=fact(n);
   printf("%d",s);
 }   