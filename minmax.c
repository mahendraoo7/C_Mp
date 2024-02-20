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
  int min(int a[], int n);
  int min(int a[], int n)
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
	 int a[50],n,i,x,y;
     scanf("%d",&n);
	 
	 for(i=0;i<=n-1;i++)
	 {
      scanf("%d",&a[i]);
	 }
	  
     x=max(a,n);
	 y=min(a,n);
	 
	  printf("\nmaximum value :%d ",x);
	  printf("\nminimum value :%d ",y);
	  
	 
   } 
	