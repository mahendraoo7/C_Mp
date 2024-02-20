#include <stdio.h> 
  void  process();
  
   void  rvs(int n)
   {
	 int s,r=0;
	 while (n != 0)
	  { 
        s=n%10;
		r = r * 10 + s;
		n /= 10;
	  } 
	  printf("%d ",r);
    }	
	void main ()
	{  
	  int n;
	  
	  scanf("%d",&n);
	  
	  rvs(n);
	  
	}
  
      