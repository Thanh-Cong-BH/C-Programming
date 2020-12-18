#include <stdio.h>
int main()

{
   float km,mi;
   printf("Convert from kilometer to mile\n\n");
   printf("Kilometers: ");
   scanf("%f", &km);
   mi=km/1.609;
   printf("\nMiles: %f", mi);
}
