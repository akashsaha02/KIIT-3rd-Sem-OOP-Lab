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
public:
    int m1, m2, m3, m4, m5;
};
class test : public marks
{
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
    void total_marks()
    {
        cout << "total marks:- " << (m1 + m2 + m3 + m4 + m5) << endl;
    }
    void total_percentage()
    {
        cout << "Percentage:- " << ((m1 + m2 + m3 + m4 + m5) / 5) << endl;
    }
};
int main()
{
    test a;
    int x1, x2, x3, x4, x5, roll, age;
    char nm[100];
    cout << "Enter name: " << endl;
    cin >> nm;
    cout << "Enter roll: " << endl;
    cin >> roll;
    cout << "Enter age: " << endl;
    cin >> age;
    cout << "Enter marks for 5 sub: " << endl;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    a.set_marks(x1, x2, x3, x4, x5);
    a.set_info(nm, roll, age);
    a.display();
    a.total_marks();
    a.total_percentage();
}
