#include <stdio.h>
int main()
{
  float a,b,c, *ptr;
  printf("Enter 3 floats: ");
  scanf("%f %f %f", &a, &b, &c);
  ptr = &a;
  *ptr = *ptr + 100;
  ptr = &b;
  *ptr = *ptr + 100;
  ptr = &c;
  *ptr = *ptr + 100;
  printf("The new values are: %f %f %f\n", a, b, c);
}
  
