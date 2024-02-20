#include <stdio.h>
  void main ()
  {
   int i,j,a[3][3], b[3][1];
   int sum=0;
   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
       scanf("%d\t",&a[i][j]);
   }
   }
      
   for(i=0;i<=2;i++)
   {sum =0;
   for(j=0;j<=2;j++)
   {
	  sum=sum+a[i][j]; 
   }
   b[i][0]=sum;
   }   
   
   for(i=0;i<=2;i++)
   {
	   j=0;
        printf("%d\t",b[i][j]);   
   
	    printf("\n");
	   
   }
 }	