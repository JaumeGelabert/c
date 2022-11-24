#include <stdio.h>

typedef struct
{
    char name[12];
    float gpa;
} Student;

int main()
{
    Student student1 = {"Jaume",
                        3.0};
    Student student2 = {"Toni",
                        4.0};
    Student student3 = {"Matias",
                        2.0};
    Student student4 = {"Martina",
                        1.0};

    Student students[] = {student1, student2, student3, student4};

    int elementsInArray = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < elementsInArray; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("\n");
    }

    return 0;
}