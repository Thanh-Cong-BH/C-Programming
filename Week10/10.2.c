#include <stdio.h>
int main()
{
  int n[10],N,i,slm = 0;
  printf("Number of elements (up to 10): ");
  scanf("%d", &N);
  for (i=0; i<=N-1; i++)
    { printf("%d. ", i+1);
      scanf("%d", &n[i]); }
  for (i=1; i<=N-2; i++)
    { if ((n[i] > n[i-1]) && (n[i] > n[i+1]))
	{ slm = slm + n[i]; }
    }
  printf("Total of local maximums: %d\n", slm);
}
  
