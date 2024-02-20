#include <stdio.h>
  void main()
  {
    int x,i,j,count=0;	
    int  a[7];
	for(x=0;x<=6;x++)
	{
     scanf("%d",&a[x]);	
    }	 
	 for(i=0;i<=6;i++)
	  {
       
        for(j=i+1;j<=6;j++)
	    {		   
	    if(a[i]==a[j])
        {
		count++;
        break;
	    }
	   }
	  } 
	   
	   printf("%d duPlicat",count);

    } 	  
      	 
 	