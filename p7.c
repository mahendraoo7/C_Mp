#include <stdio.h>

int main() {
    int i,j,k, r=8;
    
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r-i; j++)
        {
            printf(" ");
            
        }
        for(k=1; k<= r; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}