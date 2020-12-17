#include <stdio.h>
int main()

{
    char dow[2];
    int ovrngt, three_day, wkl;
    float S;
    printf("Day of week: ");
    scanf("%2c", &dow);
    printf("\n  Overnight: ");
    scanf("%d", &ovrngt);
    printf("\n  3 days: ");
    scanf("%d", &three_day);
    printf("\n  Weekly: ");
    scanf("%d", &wkl);
    S = 7.00*ovrngt + 5.00*three_day + 3.00*wkl;
    printf("\nTotal money:$ %.2f", S);
}
