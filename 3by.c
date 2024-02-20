#include <stdio.h>
  void main ()
  {
   int i,j,a[3][3];
   int sum=0;
   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
       scanf("%d\t",&a[i][j]);
   }
   }
   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
	  sum=sum+a[i][j]; 
   }
   }   
   
   {
        printf("%d\t",sum);   
   }
	    printf("\n");
	   
 }	
	