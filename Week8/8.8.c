#include <stdio.h>
int main()

{
  int f=1,i=1,n;
  printf("Calculate n!\n");
  printf("Enter n: ");
  scanf("%d", &n);
  if (n<0) { printf("Math error!\n"); }
  else if ((n==0) || (n==1)) { printf("%d!= %d\n", n, f); }
  else
    {
      while (i<=n)
	{
	  f = f*i;
	  i++;
	}
      printf("%d!= %d\n", n, f);
    }
}
  
