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
    student new;

    FILE *input = fopen("SV2021.dat", "a");

    printf("Enter name: ");
    getchar();
    gets(new.name);
    printf("Enter score: ");
    scanf("%f", &new.score);
    fprintf(input, "%-*s\t%.2f\n", 160, new_student.name, new_student.score);

    // Close SV2021.dat
    fclose(input);
}

void option3()
{
    student member_SV2021;
    char search[160];
    int N = 0;

    FILE *input = fopen("SV2021.dat", "r");

    printf("Enter name: ");
    getchar();
    gets(search);

    while (fscanf(input, "%[^\t]\t%f\n", member_SV2021.name, &member_SV2021.score) != EOF)
    {
        if (strstr(member_SV2021.name, search) != NULL)
        {
            printf("- %-*s\t%.2f\n", 160, member_SV2021.name, member_SV2021.score);
            N++;
        }
    }
    if (N == 0)
        printf("No result.\n");

    fclose(input);
}

int main()
{
    int choice;

    do
    {
        printf("Chuong trinh quan ly sinh vien\n\n");
        printf("| 1. Xem danh sach sinh vien\n");
        printf("| 2. Nhap them sinh vien\n");
        printf("| 3. Tim sinh vien theo ten\n");
        printf("| 4. Thoat\n\n");
       
        printf("Yeu cau cua ban la: ");
        if (scanf("%d", &choice) != 1)
            return 1;

        switch (choice)
        {
        case 1:
            option1();
            break;
        case 2:
            option2();
            break;
        case 3:
            option3();
            break;
        case 4:
            return 0;
        default:
            return 1;
        }

        printf("\n");
    }
    while (1);
}
    
  
