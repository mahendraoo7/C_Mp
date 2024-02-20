#include <stdio.h>
#include <string.h>
 
typedef struct{
    char name[30];
    int id;
    int salary;
} Employee;
 
void main()
{
    
    int n=2;

    
    Employee employees[n];
 
   
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        
        printf("Name:");
        printf("ramesh ragodiya\n");

        
        printf("Id:");
        printf("56\n");

        
        printf("salary:");
        printf("25000\n");

        
        char ch = getchar();
 
        printf("\n");
    }
 
    
}