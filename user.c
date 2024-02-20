#include <stdio.h>
#include <math.h>
  void main ()
  {  
    int i=0,n;
    scanf("%d",&n);
	int num[n];
	
	
	do{
		
	   printf("enter the number %d\n",i);
	   scanf("%d",&num[i]);
	   i++;
	   }while(i<=n-1);
	   i=n-1;
	   do{
		   
		   printf("%d\n",num[i]);
		   i--;
	      }while(i>=0);
		  
		   
	   
	}