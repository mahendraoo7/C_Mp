#include <stdio.h>
#include <string.h>
  
  int max(int a[] , int n);
  
  int max(int a[] , int n)
  { 
    int i,temp=0;
	
	for(i=0;i<=n-1;i++)
	{
    if(a[i]>temp)
    {
		temp=a[i]; // temp=98
    }
    }
	 return temp;
 }
  int min(int a[50] int n);
  int min(int a[50] int n)
  {
	int i, temp;
	
	for(i=0;i<=(n-1);i++)
	{
    if(a[i]<temp)
    {
		temp=a[i]; // temp=21
    }
    }
	 return temp;
 }
	  
   void main ()
   {
	 int a[50],n,max,min,i;
     scanf("%d",&n);
	 
	 for(i=0;i<=n-1;i++)
	 {
      scanf("%d",&a[i]);
	 }
	  
     max=max(a,n);
	 min=min(a,n);
	 
	 printf ("The meximum number is %d : ",max);
	 printf ("The minimum number is %d : ",min);
   } 
	