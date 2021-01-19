#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test(char custID[])
{
  int N;
  for (N=0; N<3;N++)
    {
      if(!isalpha(custID[N]))
	return 0;
    }
  for (N=3;N<7;N++)
    {
      if(!isdigit(custID[N]))
	return 0;
    }
  return 1;
}

int main()
{
  char CID[7];
  printf("Enter customer ID in LLLNNNN form: ");
  scanf("%s", CID);
  if (test(CID)==1)
    { printf("Valid.\n"); }
  else
    {
      printf("Improper format.\nExample: ABC1234\n");
    }
}
