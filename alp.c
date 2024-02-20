#include <stdio.h>
#include <string.h>
  int anagram(char str1[],char str2[]);
  
  int anagram(char str1[],char str2[])
  {
    int i,j,len1,len2,count;
	
    len1=strlen(str1);
    len2=strlen(str2);  
	  
  for(i=0;len1<=str1[i]!='\0';i++)
  {
  for(j=0;len2<=str2[j]!='\0';j++)
  {
	 count=0;
  if(str1[i]==str2[j])
  {
    count=1;
	break;
  }
  if(count==1)
  {
	 return 0;
  }else
  {
	  return 1;
  }
  }
    
  }
  }
  void main ()
  { 
  char str1[50],str2[50];
	scanf(" %s %s ",&str1,&str2);
	
  if(anagram(str1,str2))
  {
	  printf("anagram");
  }else 
  {
      printf(" not anagram");
  }
  }	
	
	
	
	
   	
  
	
     	
      