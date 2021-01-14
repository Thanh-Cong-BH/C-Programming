#include <stdio.h>
float kineticenergy (float m, float v)
{
  int KE;
  KE = m*v*v/2.0;
  return KE;
}

int main(void)
{
  float m,v;
  printf("Enter mass: ");
  scanf("%f", &m);
  printf("Enter velocity: ");
  scanf("%f", &v);
  printf("KE = %f\n", kineticenergy(m,v));
  return 0;
}
