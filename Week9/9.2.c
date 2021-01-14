#include <stdio.h>
#include <math.h>
void is_prime (int n)
{
  int i,j,k;
  for (i=2; i<=sqrt(n); i++)
    { j=0;
      if (n % i == 0) { j++; } }
  if (j==0)
    { printf("%d is a prime number.\n", n); }
  else { printf("%d is not a prime number.\n", n); }
  for (k=2; k<=n; k++)
    { for (i=2; i<=sqrt(n); i++)
       { j=0;
         if (n % i == 0) { j++; }
	 if (j==0) { printf(" %d", k); }
    
    }
}

int main()
{
  int n;
  printf("Enter a positive integer number: ");
  scanf("%d", &n);
  is_prime(n);
  return 0;
}

  

