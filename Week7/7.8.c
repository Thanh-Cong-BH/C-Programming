#include <stdio.h> 
 
int main(void) 
{ 
      int i, j;                /* loop control variables */ 
 
      printf("           I    J\n");                     /* prints column labels */ 
 
      for  (i = 1;  i < 4;  i = i + 1)        /* heading of outer for loop */ 
      {    
          printf("Outer %6d\n", i); 
          for  (j = 0;  j < i;  j = j + 1)     /* heading of inner loop */ 
          {                                    
              printf("  Inner%9d\n", j); 
          }                    /* end of inner loop */ 
      }                    /* end of outer loop */ 
       return (0); 
} 
