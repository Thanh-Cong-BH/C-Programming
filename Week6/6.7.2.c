#include <stdio.h>
#include <stdlib.h>

int main()

{
    int N, R, NAns = 1 + rand() % 10;
    printf("Guess an integer from 1 to 10: ");
    scanf("%d", &N);
    R = N - NAns;
    switch(R)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Too high! The correct number is: %d", NAns);
            break;
        case -1:
        case -2:
        case -3:
        case -4:
        case -5:
        case -6:
        case -7:
        case -8:
        case -9:
            printf("Too low! The correct number is: %d", NAns);
            break;
        default:
            printf("You got it!");
    }   
    
    
        

}    
