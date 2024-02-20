#include <stdio.h>
  void main ()
  {
   int a[5]={1,2,3,4,5};
   int *x=a;
   
   int add=*(x+4);
   
   printf("%d",add);
   
     
   
  }