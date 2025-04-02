
#include <stdio.h>

int main () {
    int i, j, k, r=6;
    
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=r-i; k++)
        {
            printf(" *");
        }
        
        printf("\n");
    }
    
    return 0;
}