#include <stdio.h>
#include <math.h>
 void  deci(int num, int binary, int base);
 
 void deci(int num ,int binary ,int base)
 
 {
	int rem;
	
 if(num!=0)
 { 
    rem=num%2;
    num=num/2;
    base=base*10;
    binary=binary+(rem*base);
	

    deci(num,binary,base);
    
	
   
 }else    
 {  
    printf("%d",binary); 
 }
 }
 
 
 void main ()
 {
	int a;
	scanf("%d",&a);
	
	deci(a,0,1);
     
 }	
	
	
	
	 