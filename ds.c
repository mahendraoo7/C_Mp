#include <stdio.h>
  void main ()
  {
    int guj[5], sci[5], math[5], total[5],per[5];
    char grade[5];
	
	for(int i=0;i<5;i++)
		
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
	printf("\t%d\t%d\t%d\t%d\t%d\tn",guj[i], sci[i],math[i], total[i], per[i]);
	
     printf("\tguj\tsci\tmath\ttotal\tper\tgrade");
 
    for(int i=0;i<5;i++)
    {
    
		if(per[i]<90)
	  {
	  printf("%c",65);
	  }
	  else 
	  if(70<per[i]&&per[i]<89)
	  {
	  printf("%c",66);
	  }
	  else 
	  if(50<per[i]&&per[i]<69)
	  {
	  printf("%c",67);
	  }
	  else 
	  if(30<per[i]&&per[i]<49)
	  {
	  printf("%c",68);
	  }
	  else 
	  if(per[i]<29)
	  {
	  printf("%c",69);
	  } 
		
	}
  }	
	
	 