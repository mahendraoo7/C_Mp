#include <stdio.h>
#include <string.h>
 
typedef struct{
    char name[30];
    char writer[30];
    int year;
} book;
 
void main()
{
    
    int n=2;

    
    book books[n];
 
   
    printf("Enter %d book Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("book %d:- \n",i+1);

        
        printf("Name: ");
        scanf("%[^\n]s",books[i].name);

        
        printf("writer name: ");
        scanf("%s",&books[i].writer);

        
        printf("year: ");
        scanf("%lf",&books[i].year);

        
        char ch = getchar();
 
        printf("\n");
    }
 
    
}