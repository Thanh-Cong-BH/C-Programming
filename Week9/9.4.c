#include <stdio.h>
int salary (int h)
{
  int M;
  if (h>=10 && h<=40)
    { M = 15000*h;
      return M;}
  if (h>40 && h<=65)
    { M = 15000*40 + 1.5*15000*(h-40);
      return M; }
}

int main()
{
  int h;
  printf("Enter working hours: ");
  scanf("%d", &h);
  if (h<10 || h>65)
    { printf("Invalid input! Try again"); }
  else printf("Salary: %d\n", salary(h));
}
  
