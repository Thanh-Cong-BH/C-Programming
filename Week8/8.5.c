#include <stdio.h>
int main()

{
  int Pass=0, Fail=0, c=1, N;
  float result;

  printf("Enter the number of students: ");
  scanf("%d", &N);

  while (c <= N)
    {
      printf(" ");
      scanf("%f", &result);
      if (result < 4.00)
	{ Fail++; }
      else { Pass++; }
      c++;
    }
  printf("Pass: %d\n", Pass);
  printf("Fail: %d\n", Fail);
}
