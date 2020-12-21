#include <stdio.h>
int main()
{
    int a,b,c,SML;
    printf("Enter 3 integers: ");
    scanf("%d, %d, %d", &a, &b, &c);
    if (a<b && a<c) { SML=a; printf("Smallest number: %d", SML); }
    else if (b<a && b<c) { SML=b; printf("Smallest number: %d", SML); }
    else if (c<a && c<b) { SML=c; printf("Smallest number: %d", SML); }
    else printf("No smallest number!");
}
