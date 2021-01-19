#include <stdio.h>
#include <string.h>

int SpaceCounter(char input[])
{
  int i, N=0;
  while (input[i] !='\0')
    {
      if (input[i] ==' ')
	{ N++; }
    }
  return N;
}

int main()
{
  char text[100];
  printf("Enter text: ");
  fgets(text,100,stdin);
  printf("There are %d blanks.\n", SpaceCounter(text));
}
  
