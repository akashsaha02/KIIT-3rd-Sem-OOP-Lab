#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    char name[100];
    int roll, age;
};
class marks : public student
{
    int m1, m2, m3, m4, m5;

public:
    void set_marks(int a1, int a2, int a3, int a4, int a5)
    {
        m1 = a1;
        m2 = a2;
        m3 = a3;
        m4 = a4;
        m5 = a5;
    }
    void set_info(char nm[], int rl, int ag)
    {
        strcpy(name, nm);
        roll = rl;
        age = ag;
    }
    void display()
    {
        cout << "Name:- " << name << endl;
        cout << "Roll No.:- " << roll << endl;
        cout << "Age:- " << age << endl;
        cout << "Marks in 5 Subjects:- " << endl;
        cout << m1 << ',' << m2 << ',' << m3 << ',' << m4 << ',' << m5 << endl;
    }
};
int main()
{
    marks a;
    char nm[100] = "Yash";
    a.set_marks(91, 92, 93, 94, 95);
    a.set_info(nm, 2550, 19);
    a.display();
}
