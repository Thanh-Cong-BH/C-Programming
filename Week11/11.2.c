#include <stdio.h>
int main()
{
  int a[7] = {13, -355, 235, 47, 67, 943, 1222};
  int i, *ptr;
  printf("The given array is:");
  for (i=0; i<=5; i++)
    { printf(" %d", a[i]); }
  printf(" %d\n",a[6]);
  printf("The hexadecimal format of the first five elements' addresses are: ");
  for (i=0; i<4; i++)
    { printf("\t%p", &a[i]); }
	printf("\t%p\n", &a[4]);
	  
	   
      
}
 
    
