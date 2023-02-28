#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks1[5];
};

int main()
{
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks \n");
    for (int i = 0; i < 5; i++)
    {
        printf("for sub %d: ", i + 1);
        scanf("%f", &s.marks1[i]);
    }

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Marks for sub %d: %.1f\n", i + 1, s.marks1[i]);
    }
    return 0;
}