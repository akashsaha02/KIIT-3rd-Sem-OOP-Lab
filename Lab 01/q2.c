#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks[5];
    float percentage;
    float total;
};
void totalpercentage(struct student s[], int num)
{
    int i, m;
    for (i = 0; i < num; i++)
    {
        s[i].total = 0;
        s[i].percentage = 0;
        for (m = 0; m < 5; m++)
        {
            s[i].total += s[i].marks[m];
            s[i].percentage += s[i].marks[m] * 0.2;
        }
    }
}

void display(struct student s[], int num, int roll)
{
    for (int i = 0; i < num; i++)
    {
        if (roll == s[i].roll)
        {
            printf("The student's name: %s\n", s[i].name);
            printf("The student's roll number: %d\n", s[i].roll);
            printf("The student's marks\n");
            for (int m = 0; m < 5; m++)
            {
                printf("%d ", s[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", s[i].total);
            printf("The student's percentage: %.2f\n", s[i].percentage);
            printf("\n");
            break;
        }
    }
}

void percentage(struct student s[], int num, float p1, float p2)
{
    for (int i = 0; i < num; i++)
    {
        if (s[i].percentage >= p1 && s[i].percentage <= p2)
        {
            printf("The student's name: %s\n", s[i].name);
            printf("The student's roll number: %d\n", s[i].roll);
            printf("The student's marks\n");
            for (int m = 0; m < 5; m++)
            {
                printf("%d ", s[i].marks[m]);
            }
            printf("\nThe student's total marks: %d\n", s[i].total);
            printf("The student's percentage: %.2f\n", s[i].percentage);
            printf("\n");
        }
    }
}

void sort(struct student s[], int num)
{
    int i, j;
    struct student temp;
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (s[j].total > s[j + 1].total)
            {
                struct student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("The student's name: %s\n", s[i].name);
        printf("The student's roll number: %d\n", s[i].roll);
        printf("The student's marks\n");
        for (int m = 0; m < 5; m++)
        {
            printf("%d ", s[i].marks[m]);
        }
        printf("\nThe student's total marks: %d\n", s[i].total);
        printf("The student's percentage: %.2f\n", s[i].percentage);
        printf("\n");
    }
}
void main()
{
    struct student s[100];
    int num, i, m, roll;
    float total, p1, p2;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        fflush(stdin);
        printf("Enter the student's name: \n");
        scanf("%s", s[i].name);
        printf("Enter the student's roll number: \n");
        scanf("%d", &s[i].roll);
        for (m = 0; m < 5; m++)
        {
            printf("Enter the student's mark %d \n: ", (m + 1));
            scanf("%d", s[i].marks[m]);
        }
        printf("\n");
    }
    totalpercentage(s, num);
    printf("Enter the student's roll number to search: ");
    scanf("%d", &roll);
    display(s, num, roll);

    printf("Enter the student's percentage 1 to search: ");
    scanf("%f", &p1);
    printf("Enter the student's percentage 2 to search: ");
    scanf("%f", &p2);
    percentage(s, num, p1, p2);

    printf("\nSort  the  array  in  ascending order of marks.\n");
    sort(s, num);
    printf("\n");
}