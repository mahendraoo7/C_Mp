#include <stdio.h>

int main()
{

    int i, j, k, r = 5;

    for (i = 1; i <= r; i++)
    {

        for (j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }

        printf("\n");
    }
}