#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

struct school
{
    char *name;
    union student grades;
};

void printStr(struct school *kid);

int main()
{
    union student Henrik;
    union student Johan;

    Henrik.exactGrade = 3.9999;
    Henrik.roundedGrade = 5.123;
    Henrik.letterGrade = 60;

    void display(union student student)
    {
        printf("C: %d\n", student.letterGrade);
        printf("INT: %d\n", student.roundedGrade);
        printf("float: %f\n", student.exactGrade);
    }
    display(Henrik);

    void display2(union student student)
    {
        student.letterGrade = 'F';
        printf("C: %c\n", student.letterGrade);
        student.roundedGrade = 4.3;
        printf("INT: %d\n", student.roundedGrade);
        student.exactGrade = 4.3;
        printf("float: %f\n", student.exactGrade);
    }
    display2(Johan);

    struct school *schoolkid = NULL;

    schoolkid = (struct school *)malloc(sizeof(struct school));
    if (schoolkid == NULL)
    {
        puts("mem failed.");
        exit(1);
    }

    union student grade = {.letterGrade = 'A'};

    schoolkid->name = "Henrik";
    schoolkid->grades = grade;

    printStr(schoolkid);

    return 0;
}

void printStr(struct school *kid)
{
    printf("Name: %s\n", kid->name);
    printf("letterGrade %c\n", kid->grades.letterGrade);
}