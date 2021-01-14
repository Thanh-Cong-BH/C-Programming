#include <stdio.h>
int main()
{
  int a,b,c,*pt;
  printf("Enter 3 integers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("You have entered those integers: \n");
  pt = &a;
  printf("a = %d\n", *pt);
  pt = &b;
  printf("b = %d\n", *pt);
  pt = &c;
  printf("c = %d\n", *pt);
}
  
