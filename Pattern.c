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

// #include <stdio.h>

// int main() {
    
//     int n=5;
//     int i,j;
    
//     for(i=1;i<=n;i++)
//     {
//         for(j=n;j>=1;j--)
//         {
//             if(i>=j)
//             {
//                 printf("* ");
//             } else {
                   
//                 printf(" ");
//             }
                
//         }
//             printf("\n");
          
//     }
// }


#include <stdio.h>

// int main () {
    
//     int i,j;

//     for( i = 1; i <= 5; i++)
//     {
//         printf("\n");
//         for(j = 5; j >= i; j--)
//         {
//             printf("* ");
            
//         }
//     }

// }

// #include <stdio.h>

// int main() {
//     int i,j,k;

//     for(i=0;i<=5;i++)
//     {
//         for(j=0; j<= 5-i;j++)
//         {
//             printf(" ");
//         }

//         for(k=0;k<=5;k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {

    int i,j,k;

    int A = 'A';

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf(" ");

        }
       for(k=1;k<=2*(5-i)-1;k++)
        {
                printf("%c ",A++);
                
        }

        printf("\n");
        
    }
}