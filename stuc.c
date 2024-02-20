#include <stdio.h>
#include <string.h>

  struct person {
    char name[50];
    int age;
    char add[50];
   }person1;
   
int main ()
{
  strcpy(person1.name,"mahendra purohit");
  person1.age =23;
  strcpy(person1.add,"surat");
  
  printf("%s\n",person1.name);
  printf("%d\n",person1.age);
  printf("%s\n",person1.add);
  
  return 0;
}
 
   