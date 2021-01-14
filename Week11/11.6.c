#include <stdio.h>
void incomeplus(int *current, int year){
        if (year >3) { *current = *current + 300000; }       
} 
void main(void)
{
        int cursal; int year;
        do {
        printf("Enter your current salary: "); 
        scanf("%d",&cursal);
        printf("Number of years passed: ");
        scanf("%d", &year);
        incomeplus(&cursal,year);
        printf("Your salary now: %d", cursal);
        }while(year!=1);


}
