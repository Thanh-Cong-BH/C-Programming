#include <stdio.h>
#include <string.h>

void FirstName(char fullname[])
{
  int N=0;
  while (fullname[N] !=' ' && fullname[N] != '\0')
    {
      N++;
      if (fullname[N] == ' ')
	{
	  fullname[N] = '\0';
	}
    }
}

int main()
{
  char name[40];
  printf("Enter your full name: ");
  fgets(name,40,stdin);
  FirstName(name);
  printf("Hello, %s\n", name);
}
  
