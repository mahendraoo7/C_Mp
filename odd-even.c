#include <stdio.h>

  void main ()
  {
  
   int i,a[8]={1,4,7,8,5,2,3,6};
   int sum=0;
   int num=0;
   
    for(i=0;i<=9;i=i+2)
	{
	sum=sum+a[i];
	}
	for(i=1;i<=9;i=i+2)
	{
	 num=num+a[i];
	}
	
	printf("%d\n",sum);
	printf("%d\n",num);
	}
	