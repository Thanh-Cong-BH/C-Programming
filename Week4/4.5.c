#include <stdio.h>
#define PI 3.14
int main()

{ 
   float R, C, S, V;
   printf("Enter radius: ");
   scanf("%f", &R);
   C= 2*R*PI;
   S= 4*PI*R*R;
   V=(4.00/3)*PI*R*R*R;
   printf("\nCircumference: %f", C);
   printf("\nSphere's area: %f", S);
   printf("\nSphere's volume: %f", V);
   
}
