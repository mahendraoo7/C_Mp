#include <stdio.h>

int main () {
    
    int i, j, r=6;
    
    for(i=1;i<r; i++) {
        
        for(j=1; j<r; j++)
        {
            if( i==1 || i==r-1 || j==1 || j==r-1)
            {
                printf("*");
            } else {
                printf(" ");
            }
        } 
        
        printf("\n");   
    }
    
    return 0;
}