#include <stdio.h>
   void perfact();
   
   void prf()
   {
	 int i,n,s=0,r;
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
   }	 
   
    void main ()
	{
		prf();
    }
	 	 
	
		
		
    		
	 