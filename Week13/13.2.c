#include <stdio.h>
#include <string.h>

int replace(char str[], char rpl_what, char rpl_by)
{
  int i;
  for(i=0;str[i]!='\0';++i)
    {
      if (str[i] == rpl_what)
	{ str[i] = rpl_by; }
    }
}

int main()
{
  char text[31];
  char rpl_what, rpl_by;
  printf("Enter text: ");
  scanf("%s", text);
  printf("Letter to replace: ");
  scanf("%s", &rpl_what);
  printf("Replace by: ");
  scanf("%s", &rpl_by);
  replace(text, rpl_what, rpl_by);
  printf("Result: %s\n", text);
}
