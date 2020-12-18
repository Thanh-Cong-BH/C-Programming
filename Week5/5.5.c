#include <stdio.h>
 
int main()
{
   double num1, num2;
   
   printf( "Enter two doubles: ");
   scanf( "%f%f", &num1, &num2  ); 
   if ( num1 == num2 ) 
      printf(  "%f is equal to %f\n", num1, num2 );
   if ( num1 != num2 ) 
      printf(  " %f is not equal to %f\n ", num1, num2 );
   if ( num1 < num2 ) 
      printf( "%f is less than %f\n", num1, num2 );
   if ( num1 > num2 ) 
      printf( "%f is greater than %f\n", num1, num2 );
   if ( num1 <= num2 ) 
      printf( "%f is less than or equal to %f\n", num1, num2 );
   if ( num1 >= num2 ) 
      printf( "%f is greater than or equal to %f\n", num1, num2 );
}

 
