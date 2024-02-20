#include <stdio.h>
#include <math.h>
  void main ()
  {
    int i=0;
	int num[17];
	
	
	do{
		
	   printf("enter the number %d",i);
	   scanf("%d",&num[i]);
	   i++;
	   }while(i<=16);
	   i=0;
	   do{
		   
		   printf("%d",num[i]);
		   i++;
	      }while(i<=16);
		  
		   
	   
	}