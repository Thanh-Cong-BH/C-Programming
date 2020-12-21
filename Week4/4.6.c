#include <stdio.h>
int main()

{ 
   int hrs, wage;
   printf("Enter worked hours this week: ");
   scanf("%d", hrs);
   if (hrs>=0, hrs<=40) { wage = 25000*hrs; printf("Wage: %d", wage) }
   else if (hrs>40, hrs<=60) { wage = 25000*40 + 40000*(hrs-40); printf("Wage: %d", wage) }
   else printf("Inappropriate data! Please try again.");
}
