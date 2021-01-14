#include <stdio.h>

int main()

{
  int C;
  float F;
  printf("C      F\n");
  for (C=0; C<=100; C++)
  { F=32.00+1.80*C;
    printf("%d      %.2f\n",C, F); }
}
  
    
