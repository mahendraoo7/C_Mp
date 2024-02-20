#include <stdio.h>
#include <math.h>
 void main ()
 {
	int base=1;
	int rem;
	int decimal_num=0,i=1;
	int num=111011011;
	
 while(num>0)
 {
    rem=num%10;
    num=num/10;

    decimal_num=decimal_num+(rem*base);
	
	base=pow(2,i);
    i++;
 }
    printf("%d",decimal_num); 
 }
 }