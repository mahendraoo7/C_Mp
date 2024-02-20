#include <stdio.h>
#include <string.h>

  struct employe1 {
    char name[50];
    int  age;
    int  id;
   } employe1;
   
   struct employe2 {
	char name[50];
    int  age;
    int  id;
   } employe2;
	   
   
       
   
int main ()
{
  strcpy(employe1.name,"parth modi");
  employe1.age =25;
  employe1.id =5;
  
  strcpy(employe2.name,"rahul sharma");
  employe2.age =27;
  employe2.id =8;
  
  printf("\n name :%s",employe1.name);
  printf("\n age :%d ",employe1.age);
  printf("\n id :%d ",employe1.id);
  
  printf("\n name :%s ",employe2.name);
  printf("\n age :%d ",employe2.age);
  printf("\n id :%d ",employe2.id);
  
  return 0;
}
 
   