// #include <stdio.h>

// int main() {
    
//     int i,j,n;

//     for(i=0;i<=5;i++)
//     {
//         printf("*");

//         for(j=0;j<=i;j++) 
//         {
//             printf("\n");
//         }
//     }
// }

#include <stdio.h>

int main() {
    
    int n=5;
    int i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(i>=j)
            {
                printf("* ");
            } else {
                
                printf(" ");
            }
                
        }
            printf("\n");
    
    }
}