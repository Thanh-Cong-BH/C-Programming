#include <stdio.h>
int isLeapYear (int Y)
{
  if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
    { printf("%d is a leap year.\n",Y); }
  else { printf("%d is not a leap year.\n", Y); }
}

int main()
{
  int Y;
  printf("Enter year: ");
  scanf("%d", &Y);
  isLeapYear(Y);
}

  
