#include <stdio.h>
int main()

{
   float HDI;
   printf("Enter compass heading: ");
   scanf("%f", &HDI);
   if (HDI<0 || HDI>360)
      { printf("Inappropriate data. Try again");
        printf("Enter compass heading: ");
        scanf("%f", &HDI); }
   else if (HDI>=0 && HDI<90)
      { printf("North %f degree east", HDI); }
   else if (HDI>=90 && HDI<180)
      { printf("South %f degree east", 180.0-HDI); }
   else if (HDI>=180 && HDI<270)
      { printf("South %f degree west", HDI-180.0); }
   else if (HDI>=270 && HDI<=360)
      { printf("North %f degree west", 360.0-HDI); }
}
