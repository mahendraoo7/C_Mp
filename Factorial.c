#include <stdio.h>

int main()
{

 int n;
 int M = 1;
 int i ;
    
printf("enter Number :");    
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
     M *= i ;
       
  }
 
  printf("%d",M);
    
}