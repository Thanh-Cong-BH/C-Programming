#include <stdio.h>
#include <string.h>
#include "student.h"

void option1()
{
    student member;

    FILE *input = fopen("SV2021.dat", "r");

    while (fscanf(input, "%[^\t]\t%f\n", member.name, &member.score) != EOF)
    {
        printf("- %s\t%.2f\n", member.name, member.score);
    }
    
    fclose(input);
}

void option2()
{
  
