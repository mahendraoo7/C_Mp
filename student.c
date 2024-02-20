#include <stdio.h>
#include <math.h>
  void main()
   {
   int s=0,sum=0,m=0,sub;
   
   for(s=0;s<=5;s++);
   
   {
     sum=0;
	 
	 printf("\n enter the marks for s%d",s+1);
	 
	 }
	 
	 for(sub=0;sub<=3;sub++);
	 {
	 printf("\n enter the marks for subject%d",sub+1);
	 scanf("%d",&m);
	 
    sum=sum+m;
	}
	
	 printf("\n for s%d",s+1);
	 printf("\n sum=%d",sum);
	 printf("\n avarage = %.2f",((float)sum)/sub);
	 
	} 
	
   