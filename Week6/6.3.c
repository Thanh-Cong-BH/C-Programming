#include <stdio.h>
int main()

{
   int age;
   printf("Enter age: ");
   scanf("%d", &age);
   if (age<0)
      { printf("Inappropriate data. Try again"); }
   else if (age>=0; age<18) { printf("Child"); }
   else if (age>=18; age<65) { printf("Adult"); }
   else if (age>=65) {printf("Senior citizen"): }
}
   
