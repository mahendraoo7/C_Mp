#include <stdio.h>

 void main ()
 {

   int a=10;
   int *ptr;
   ptr=&a;

   int **b=&ptr;

   printf("%d\t%d",ptr,b);
 }