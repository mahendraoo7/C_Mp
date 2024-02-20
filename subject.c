#include <stdio.h>
  void main ()
  {
    int guj[5], sci[5], math[5], total[5],per[5];
    char grade[5];
	
	for( int i=0;i<5;i++)
		
	{
    printf("\nenter %d student marks \n",i+1);
    printf("enter gujrati marks: ");
    scanf("%d",&guj[i]);
    printf(" enter science marks ");
    scanf("%d",&sci[i]);
    printf("enter maths marks");
    scanf("%d",&math[i]);

    total[i]=guj[i]+sci[i]+math[i];
    per[i]=(total[i]*100)/300;
	 
	}
	
 
    printf("\tguj\tsci\tmath\ttotal\tper\n");
 
    for(int i=0;i<5;i++)
    {
	printf("\t%d\t%d\t%d\t%d\t%d\n",guj[i], sci[i],math[i], total[i], per[i]);
	}
	
  }	
	
	 
  
  
  