#include <stdio.h>
  void main()
  {
    int x,i,j,count=0;	
    int  a[9];
	int  b[9]={1,1,1,1,1,1,1,1,1};
	for(x=0;x<=8;x++)
	{
     scanf("%d",&a[x]);	
    }	 
	 for(i=0;i<=8;i++)
	  {
       count =1;
        for(j=i+1;j<=8;j++)
	    {		   
	    if(a[i]==a[j])
        {
		count++;
		b[j]=0;
		}
        
	    }
		if(b[i] != 0)
			{
				b[i]= count;
				printf("%d is repeated %d times\n",a[i],b[i]);
			}
        
	   }
    } 	  