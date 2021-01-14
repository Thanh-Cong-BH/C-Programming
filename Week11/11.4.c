#include <stdio.h>
void swap_3 (int *p, int *q, int *r)
{
  int tmp;
  tmp = *p;
  *p = *q;
  *q = *r;
  *r = tmp;
}

int main()
{
  int x,y,z;
  printf("Enter 3 integers: ");
  scanf("%d %d %d", &x, &y, &z);
  swap_3(&x,&y,&z);
  printf("Results: %d %d %d\n", x, y, z);
}
