#include <stdio.h> 
   int rvs(int n);
  
   int rvs(int n)
   {
	 int s,r=0;
	 while (n != 0)
	  { 
        s=n%10;
		r = r * 10 + s;
		n /= 10;
	  } 
	  printf("%d ",r);
	  
	  return r;
    }	
	void main ()
	{  
	  int n,ans;
	  scanf("%d",&n);
	  
	  ans=rvs(n);
	  
	}