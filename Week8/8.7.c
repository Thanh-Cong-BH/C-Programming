#include <stdio.h>
int main()

{
  float score, total=0;
  int n=0;
  printf("Enter score: ");
  scanf("%f", &score);
  while (score>=0.00)
    {
      total += score;
      n++;
      scanf("%f", &score);
    }
  printf("Avg: %f\n", total/n);
}
