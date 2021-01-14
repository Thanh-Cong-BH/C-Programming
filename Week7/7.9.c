#include <stdio.h>

int main()

{
  int i, n, f;
  printf("Enter n: ");
    scanf("%i",&n);
  f=1;
  for (i=1;i<=n;i++)
    { f=f*i; }
  printf("\n%d! = %d\n",n,f);
}
      
