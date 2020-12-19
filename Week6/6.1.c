#include <stdio.h>
int main()

{
   char ch1,ch2,ch3,f1;
   printf("Type a three-letter string: ");
   scanf("%s%s%s", &ch1, &ch2, &ch3);
   f1=ch1; 
   if (ch2<f1) { f1=ch2; }
   if (ch3<f1) { f1=ch3; }
   printf("The first alphabetical letter is %s\n", f1);
}
   
