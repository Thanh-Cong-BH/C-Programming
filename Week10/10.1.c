#include <stdio.h>
int main()
{
  int N[100],n, S_odd, min,i,j;
printf("Enter number of elements (up to 100): ");
scanf("%d", &n);
if (n<=0 || n>100)
  { printf("Inappropriate input! Please re-run the program.\n"); }
 else {
   S_odd = 0;
   for (i=0; i<=n-1; i++)
     { printf("%d. ", i+1);
       scanf("%d", &N[i]); }
   min = N[0];
   for (i=0; i<=n-1; i++)
     { if (N[i] % 2 == 1)
	   { S_odd = S_odd + N[i]; }
	 for (j=i+1; j<=n-1; j++)
	   { if (N[j] < min)
	       { min = N[j]; }
	   }
     }
	 printf("Total of odd numbers: %d\n", S_odd);
	 printf("Minimum value of array: %d\n", min);
 }
}

   
