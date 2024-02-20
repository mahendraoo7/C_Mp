#include <stdio.h>
   int perfact(int n);
   
   int prf(int n )
   {
	 int i,s=0,r;
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
       r=n%i;
	  if(r==0)
       {
        s=s+i;		  
	   }
	 }
     if((s/2)==n)
     {
		printf("is perfact number");
     }
     else 
     {
        printf("is not perfact number");
	 }
    return s;
   }	
   
    void main ()
	{   int a,ans;
	    ans=prf(a);
    }
	 	 
	
		
		
    		
	 