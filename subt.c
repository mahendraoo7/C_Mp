#include <stdio.h>
 void main ()
 {
  int i,j, a[2][4];
  int b[2][4],c[2][4];
   
   for(i=0;i<=1;i++)
   {
   for(j=0;j<=3;j++)
   {
     scanf("%d",&a[i][j]); 
   }
   }
   for(i=0;i<=1;i++)
   {
   for(j=0;j<=3;j++)
   {
     scanf("%d",&b[i][j]);
   }
   }
   for(i=0;i<=1;i++)
   {
   for(j=0;j<=3;j++)
   {
	 c[i][j]=a[i][j]-b[i][j];
   }
   }
   for(i=0;i<=1;i++)
   {
   for(j=0;j<=3;j++)
   {
     printf("%d\t",c[i][j]);
   }
     printf("\n");
   }
    
		  
 }  