#include <stdio.h>
#include <curses.h>

int main()

{
  int x=40, y=12, h,i,j;
  printf("h= ");
  scanf("%d\n", h);
  gotoxy (x, y);
  for (i=0; i<h; i++)
    { gotoxy (x-i, y+i);
      for (j=0; j<(2*i+1); j++)
	{ if (j=0) printf("*");
	else if (j=2*i) printf("*\n");
        else printf(" "); }
    }
}
  
