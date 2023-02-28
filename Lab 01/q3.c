#include <stdio.h>

struct employee
{
    int id;
    char name[10];
    int age;
    int basic;

} emp[100];

void result(struct employee *emp, int a);

int main()
{
    int num;
    printf("How many employees: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("For employee no: %d\n", i + 1);
        printf("Enter id: ");
        scanf("%d", &emp[i].id);
        printf("name: ");
        scanf("%s", &emp[i].name);
        printf("age: ");
        scanf("%d", &emp[i].age);
        printf("basic salary: ");
        scanf("%d", &emp[i].basic);
    }

    result(emp, num);

    return 0;
}

void result(struct employee *emp, int a)
{

    float da, hra, total;
    printf("\n\nDisplaying Information\n\n");
    for (int i = 0; i < a; i++)
    {
        da = 0.8 * emp[i].basic;
        hra = 0.1 * emp[i].basic;
        total = emp[i].basic + da + hra;
        printf(" Id: %d\nName: %s\nAge: %d\nBasic Salary:%d\nGross Salary: %f\n\n", emp[i].id, emp[i].name, emp[i].age, emp[i].basic, total);
    }
}