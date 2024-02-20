#include <stdio.h>
 void main ()
 {
   int i;
   
   for(i=0;i<=20;i++)
   {
     if(i==4 || i==8 || i==12)
     {
        continue;
     }
     printf("%d",i);
   }	 
 }