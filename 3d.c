#include <stdio.h>
  void main ()
  {
   int i,j,a[3][3], b[3][3];
   int sum;
   for(i=0;i<=2;i++)
   {
   for(j=0;j<=2;j++)
   {
       scanf("%d\t",&a[i][j]);
   }
   }
      
   for(i=0;i<=2;i++)
   {sum =0;
   
	  sum=sum+a[i][j]; 
   }
   b[i][j]+1;
   b[i][j]=sum;
   }   
   
   for(i=0;i<=2;i++)
   {
	   j=0;
        printf("%d\t",b[i][j]);   
   
	    printf("\n");
	   
   }
 }	