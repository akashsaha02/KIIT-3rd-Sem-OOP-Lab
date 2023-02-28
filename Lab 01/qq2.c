#include <stdio.h>
struct Student
{
    char name[30];
    int rollNumber;
    int marks[5];
    int totalMarks;
    float percentage;
};
// a.   Find  total  marks  and  percentage  of  all  n  students.
void totalpercentage(struct Student students[], int numberStudents)
{
    int i, m;
    for (i = 0; i < numberStudents; i++)
    {
        students[i].totalMarks = 0;
        students[i].percentage = 0.0;
        for (m = 0; m < 5; m++)
        {
            students[i].totalMarks += students[i].marks[m];
            students[i].percentage += students[i].marks[m] * 0.2;
        }
    }
}

// b.   Display  details  of  a  student  with  a  given  roll  number.
void display(struct Student students[], int numberStudents, int rollNumber)
{
    int i, m;
    for (i = 0; i < numberStudents; i++)
    {
        if (rollNumber == students[i].rollNumber)
        {
            printf("The student's name: %s\n", students[i].name);
            printf("The student's roll number: %d\n", students[i].rollNumber);
            printf("The student's marks\n");
            for (m = 0; m < 5; m++)
            {
                printf("%d ", students[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", students[i].totalMarks);
            printf("The student's percentage: %.2f\n", students[i].percentage);
            printf("\n");
            break;
        }
    }
}
// c.   Display  the  details  for  all  the  students  having  percentage  in  a  given range.
void percentageRange(struct Student students[], int numberStudents, float percentage1, float percentage2)
{
    int i, m;
    for (i = 0; i < numberStudents; i++)
    {
        if (students[i].percentage >= percentage1 && students[i].percentage <= percentage2)
        {
            printf("The student's name: %s\n", students[i].name);
            printf("The student's roll number: %d\n", students[i].rollNumber);
            printf("The student's marks\n");
            for (m = 0; m < 5; m++)
            {
                printf("%d ", students[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", students[i].totalMarks);
            printf("The student's percentage: %.2f\n", students[i].percentage);
            printf("\n");
        }
    }
}
// d.   Sort  the  array  in  ascending order of marks.
void sort(struct Student students[], int numberStudents)
{
    int i, j, m;
    for (i = 0; i < numberStudents - 1; i++)
    {
        for (j = 0; j < numberStudents - i - 1; j++)
        {
            if (students[j].totalMarks > students[j + 1].totalMarks)
            {
                // swap temp and elements[i]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < numberStudents; i++)
    {
        printf("The student's name: %s\n", students[i].name);
        printf("The student's roll number: %d\n", students[i].rollNumber);
        printf("The student's marks\n");
        for (m = 0; m < 5; m++)
        {
            printf("%d ", students[i].marks[m]);
        }
        printf("\nThe student's total marks: %d\n", students[i].totalMarks);
        printf("The student's percentage: %.2f\n", students[i].percentage);
        printf("\n");
    }
}

void main()
{
    struct Student students[100];
    int numberStudents, i, m;
    int rollNumber;
    float percentage1;
    float percentage2;
    printf("Enter the number of students: ");
    scanf("%d", &numberStudents);

    for (i = 0; i < numberStudents; i++)
    {
        fflush(stdin);
        printf("Enter the student's name: \n");
        scanf("%s", students[i].name);
        printf("Enter the student's roll number: \n");
        scanf("%d", &students[i].rollNumber);
        for (m = 0; m < 5; m++)
        {
            printf("Enter the student's mark %d \n: ", (m + 1));
            scanf("%d", &students[i].marks[m]);
        }
        printf("\n");
    }
    totalpercentage(students, numberStudents);
    printf("Enter the student's roll number to search: ");
    scanf("%d", &rollNumber);
    display(students, numberStudents, rollNumber);

    printf("Enter the student's percentage 1 to search: ");
    scanf("%f", &percentage1);
    printf("Enter the student's percentage 2 to search: ");
    scanf("%f", &percentage2);
    percentageRange(students, numberStudents, percentage1, percentage2);

    printf("\nSort  the  array  in  ascending order of marks.\n");
    sort(students, numberStudents);
    printf("\n");
}