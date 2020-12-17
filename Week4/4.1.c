#include <stdio.h>
int main()

{
  int i;
  double d;
  printf("Enter an integer: ");
  scanf("%d", &i);
  printf("Enter a double: ");
  scanf("%lf", &d);
  printf("Output: %d\n        %lf",i,d);
}
