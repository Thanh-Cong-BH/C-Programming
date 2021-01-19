#include <stdio.h>
#include <string.h>

char* string(char* str1, char* str2)
{
  while(*str1 !='\0')
    {
      if (strchr(str2, *str1) != NULL)
	{ return str1; }
      ++str1;
    }
  return NULL;
}

int main()
{
  char* punct=".,;:!?";
  char str[15];
  char* p;

  printf("Enter a string: ");
  scanf("%15s", str);

  for(p = string(str, punct); p!=NULL; p=string(p+1, punct))
    { *p=' '; }
  printf("Result: \n");
}
  
    

