#include <iostream>
#include <cstring>
using namespace std;
class Student
{
protected:
    char name[20];
    int roll;

public:
    void get()
    {
        cout << "Enter name and roll no. : ";
        cin >> name >> roll;
    }
};
class Sports : public Student
{
protected:
    int s_grade;

public:
    void get_s()
    {
        cout << "Enter sports grade : ";
        cin >> s_grade;
    }
};
class Exam : public Student
{
protected:
    int e_grade;

public:
    void get_e()
    {
        cout << "Enter exam grade : ";
        cin >> e_grade;
    }
};
class Results : public Sports, public Exam
{
public:
    char res[10];
    void display()
    {
        if (s_grade >= 8 && e_grade >= 8)
        {
            strcpy(res, "Distinction");
        }
        else if (s_grade >= 6 && e_grade >= 6)
        {
            strcpy(res, "First Class");
        }
        else if (s_grade >= 4 && e_grade >= 4)
        {
            strcpy(res, "Second Class");
        }
        else if (s_grade >= 2 && e_grade >= 2)
        {
            strcpy(res, "Third Class");
        }
        else
        {
            strcpy(res, "Fail");
        }
    }
};
int main()
{
    Results r;
    // r.get();   //ammiguas 
    r.get_s();
    r.get_e();
    r.display();
    cout << "Result : " << r.res;
    return 0;
}