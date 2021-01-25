#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "student.h"

#define DATA_PATH "./SV2021.dat"

//* Prototypes
void printMenu();
void printTableHeader();
void printBreak();
void handleAddStudent();
void handleSearchStudent();
void searchAndPrintStudentRow(char *query);
void appendStudent(Student stu);
void printStudentRows();

int main()
{
    int choice;
    do
    {
        printMenu();
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            printTableHeader();
            printStudentRows();
            break;
        case 2:
            handleAddStudent();
            break;
        case 3:
            handleSearchStudent();
            break;
        case 4:
            return 0;
        default:
            printf("Lua chon khong hop le!");
            break;
        }
    } while (choice != 4);
}

void printMenu()
{
    printf("\n 1.Xem danh sach sinh vien");
    printf("\n 2.Nhap them sinh vien");
    printf("\n 3.Tim sinh vien theo ten");
    printf("\n 4.Thoat \n");
}

void printTableHeader()
{
    printBreak();
    printf("| %29s | %29s | \n", "Name", "Score");
    printBreak();
}

void printBreak()
{
    for (int i = 0; i < 65; i++)
        putchar('=');
    printf("\n");
}

void handleAddStudent()
{
    Student new_student;
    char name[255];

    printf("Nhap ten:   ");

    fflush(stdin); //* Must flush stdin, otherwise fgets will malfuntion!
    fgets(name, 255, stdin);
    strtok(name, "\n"); //* Remove new line in last position `name` string

    strcpy(new_student.name, name); //* Must use strcpy for string

    printf("Nhap diem:  ");

    scanf(" %f", &new_student.score);

    appendStudent(new_student);

    printBreak();
    printf("Them thanh cong %s voi so diem %.2f!  \n", new_student.name, new_student.score);
    printBreak();
}

void handleSearchStudent()
{
    printf("Nhap ten can tim:   ");
    char tmp[255];

    fflush(stdin);
    fgets(tmp, 255, stdin);
    strtok(tmp, "\n");

    printf("Ket qua tim kiem: \n");
    printTableHeader();
    searchAndPrintStudentRow(tmp);
}

void searchAndPrintStudentRow(char *query)
{
    FILE *file = fopen(DATA_PATH, "r");
    Student cur_student;
    while (fread(&cur_student, sizeof(Student), 1, file))
    {
        if (!strstr(cur_student.name, query)) //* Check if query is substring of current student
            continue;                         // Otherwise skip this student

        printf("| %29s | %29.2f | \n", cur_student.name, cur_student.score);
        printBreak();
    }

    fclose(file);
}

void appendStudent(Student stu)
{
    FILE *file = fopen(DATA_PATH, "ab+");
    int result = fwrite(&stu, sizeof(Student), 1, file);
    assert(result != 0);
    fclose(file);
}

void printStudentRows()
{
    FILE *file = fopen(DATA_PATH, "r");
    Student tmp;
    while (fread(&tmp, sizeof(Student), 1, file) )
    {
        printf("| %30s| %30.2f| \n", tmp.name, tmp.score);
        printBreak();
    }
    fclose(file);
}
