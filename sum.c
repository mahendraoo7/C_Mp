#include <stdio.h>
#include <math.h>
  void main ()
  {  
    int i=0,n,sum=0;
    scanf("%d",&n);
	int num[n];
	
	
	do{
		
	   printf("enter the number %d\n",i);
	   scanf("%d",&num[i]);
	   i++;
	   }while(i<=n-1);
	   i=0;
	   do{
		   sum=sum+num[i];
		   i++;
	      }while(i<=n-1);
		  
		   printf("%d",sum);
		   
	   
	}