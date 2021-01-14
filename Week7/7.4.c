#include <stdio.h>
#include <math.h>

int main()

{
  printf("Prime numbers smaller than 100\n");
  printf("2\n3\n5\n7\n");
  int i;
  for (i=8;i<100;i++)
    { if ((i % 2 !=0) && (i % 3 !=0) && (i % 5 !=0) && (i % 7 !=0))
		       printf("%d\n", i); }
}
