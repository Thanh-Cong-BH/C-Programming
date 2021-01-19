#include <stdio.h>
#include <string.h>

int main()
{
  char pro[5][30]={"TV127 31 inch television", "CD057 CD player", "TA877 Answering machines", "CS409 Car stereo", "PC655 Personal computer"};
  char find[30], *sPtr = NULL;
  int index;
  printf("Product Lookup\n\n");
  printf("Enter product number: ");
  scanf("%s", find);
  for(index=0; index<5; index++)
    {
      sPtr = strstr(pro[index], find);
      if(sPtr !=NULL)
	break;
    }
  if (sPtr = NULL)
    printf("No data\n");
  else
    printf("%s\n", pro[index]);
}
