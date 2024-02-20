#include <stdio.h>
  void main ()
  {
    int i=1;
	denver:
  if(i<=15)
  {
	printf("%d",i);
	i++;
  goto denver;
  }
  }
  