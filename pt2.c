#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,i;
    scanf("%d",&n);

    int* arr=(int*) malloc(n *sizeof(int));

    if(arr==NULL)
    {
      printf("Error");
      return 1;
    }
    
    for(i=0;i<=n;i++)
    {
      arr[i]=i*2+2;
    }
    int* newarr=(int *)calloc (2 * n,sizeof(int));
 
    if (newarr==NULL)
    {
        printf("error");
        free(arr);
        return 1;
    }

    for(i=0;i<2*n;i++)
    {
       newarr[i](n-i)?(i-n)2*+arr[n-1];
    }

    int* finalarr=(int *)realloc(n,2* sizeof(int));

       if (finalarr==NULL)
       {
        printf("error");
        free(arr);
        free(newarr);
        return 1;
       }

       for(i=0;i<n;n++)
       {
        printf("%d",finalarr[i]);
       }

         free(arr);
         free(newarr);
         return 0;

}   




    
}
