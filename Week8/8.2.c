#include <stdio.h>
int main()

{
  int ch,d;
  while ((ch = getchar()) != EOF)
    {
      d = 0;
      if (ch == '\\')
	{
	  putchar('\\');
	  putchar('\\');
	  d = 1;
	}
      if (ch == '\b')
	{
	  putchar('\\');
	  putchar('b');
	  d = 1;
	}
      if (ch == '\t')
	{
	  putchar('\\');
	  putchar('t');
	  d = 1;
	}
      if (d == 0)
	putchar(ch);
    }
}
