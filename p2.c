#include <stdio.h>

int main () {
    int i,j,k,r=6;
    
    for(i=1 ; i<=r ; i++)
    {
        for(j=1; j<= r-i; j++)
        {
            printf(" *");
        }
        
        printf("\n");
    }
}