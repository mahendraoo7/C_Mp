#include <stdio.h>
  void main ()
  {
    int i;
	for(i=0;i<=20;i++)
	{
	  if(i==5 || i==10)	
	  {  
	   continue;
	  } 
	
	  printf("%d",i);
	}
   }
  