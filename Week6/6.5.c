#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, NAns = 1 + rand() % 10;
    printf("Guess an integer from 1 to 10: ");
    scanf("%d", &N);
    if (N<1 || N>10) { printf("Invalid guess!"); }
    else
        {
            if (N > NAns) { printf("Too high! The correct number is %d.", NAns); }
            if (N < NAns) { printf("Too low! The correct number is %d.", NAns); }
            if (N == NAns) { printf("You got it!"); }
        }
}
