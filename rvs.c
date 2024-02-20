#include <stdio.h>
#include <string.h>
  void main ()
  {  
     int i,n;
     char a[27];
     char temp ,b[27];
      gets(a);
      n= strlen(a);
	  
    for(i=0;i<=n-1;i++)
    { 
      temp=a[i];
	  a[i]=a[n-1];
	  a[n-1]=temp;
	  n--;
	  }
	  puts(a);
      
  }