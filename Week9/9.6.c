#include <stdio.h>
float Celsius (float F)
{
  float C;
  C = (F-32)*(5.0/9.0);
  return C;
}

int main()
{
  float F,C,i;
  printf("Enter a temperature in Farenheit: ");
  scanf("%f", &F);
  printf("This equals to %.2f degree Celsius.\n\n", Celsius(F));
  printf("Farenheit - Celsius\n");
  for (i=0; i<=20; i++)
    printf("    %.0f      %.2f \n", i, Celsius(i));
}
