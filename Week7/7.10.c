#include <stdio.h>

int main()

{
  int i,j,N,S;
  printf("Enter N: ");
  scanf("%d", &N);
  for (i=2; i<N; i++)
    { S=0;
      for (j=1; j<=i/2; j++)
      if (i%j==0) S=S+j;
      if (S==i) printf("\n%d", i); }
}
