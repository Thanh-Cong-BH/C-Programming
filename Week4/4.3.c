#include <stdio.h>
int main()

{ 
   char z[10]; 
   printf("Enter string: ");
   scanf("%[aeiou]", &z);
   printf( "The input was \"%s\"\n", z );
}
