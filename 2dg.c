#include <stdio.h>
 void main ()
  {
   int i,j, a[2][9]={{1,2,3,4,5,6,7,8,9},{9,8,7,6,5,4,3,2,1}};
   
    for(i=0;i<=1;i++)
	 {
	  for(j=0;j<=8;j++)
	  {
        printf("%d",a[i][j]);
		
		if(j==8)
		{
		 printf("\n");
	    }
     }
    }	 
  }