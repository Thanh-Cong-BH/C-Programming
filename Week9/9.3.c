#include <stdio.h>
int cubesum (int n)
{
  int i, CB = 0;
  for (i=1; i<=n; i++)
    CB = CB + i*i*i;
  printf("%d\n\n", CB);
}

int submultiples (int n)
{
  int i;
  for (i=1; i<=n/2; i++)
    if (n % i == 0) { printf(" %d\n",i); }
}

int perfectsquare (int n)
{
  int i;
  for (i=1; i<=n; i++)
    printf(" %d", i*i);
}

int main()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  cubesum(n);
  submultiples(n);
  perfectsquare(n);
}
  
