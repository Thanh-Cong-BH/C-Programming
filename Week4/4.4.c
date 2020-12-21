#include <stdio.h>
int main()

{
  short s;
  int i;
  long l;
  float f;
  double d;
  printf("Enter a 2-digit (short integer): ");
  scanf("%2hd", &s);
  printf("Enter a 4-digit integer: ");
  scanf("%4d", &i);
  printf("Enter a 8-digit (long) integer: ");
  scanf("%8ld", &l);
  printf("Enter a float with less than 4-digit before the decimal dot: ");
  scanf("%10f", &f);
  printf("Enter a double with less than 8 digits before the decimal dot: ");
  scanf("%15lf, &d);
}
