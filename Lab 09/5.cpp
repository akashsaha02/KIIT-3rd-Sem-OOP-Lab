#include <iostream>
using namespace std;
class student
{
public:
    int roll, age;
    string name;
    int m1, m2, m3, m4, m5;
};
class UG : public student
{
public:
    int semester, fee, stipend;
    void get_data()
    {
        cout << "Enter roll:" << endl;
        cin >> roll;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter age: " << endl;
        cin >> age;
        cout << "Enter marks for 5 subs:" << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
        cout << "Enter semester fee and stipend for UG student" << endl;
        cin >> semester >> fee >> stipend;
    }
    void show()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        cout << "Student type: UG" << endl;
        cout << "Semester: " << semester << endl;
        cout << "Fee: " << fee << endl;
        cout << "Stipend amount: " << stipend << endl;

        cout << "The marks are " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total marks " << (m1 + m2 + m3 + m4 + m5) << endl;
        cout << "Average marks " << (m1 + m2 + m3 + m4 + m5) / 5 << endl;
    }
};
class PG : public UG
{
public:
    void get_data()
    {
        cout << "Enter roll:" << endl;
        cin >> roll;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter age: " << endl;
        cin >> age;

        cout << "Enter marks for 5 subs:" << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;

        cout << "Enter semester fee and stipend PG student";
        cin >> semester >> fee >> stipend;
    }
    void show()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

        cout << "Student type: PG" << endl;
        cout << "Semester: " << semester << endl;
        cout << "Fee: " << fee << endl;
        cout << "Stipend amount: " << stipend << endl;

        cout << "The marks are " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total marks " << (m1 + m2 + m3 + m4 + m5) << endl;
        cout << "Average marks " << (m1 + m2 + m3 + m4 + m5) / 5 << endl;
    }
};
int main()
{
    int t = 5;
    while (t--)
    {
        int choice;
        cout << "for ug student type 1 \nfor pg student type 2\n";
        cin >> choice;
        if (choice == 1)
        {
            UG u;
            u.get_data();
            u.show();
        }
        if (choice == 2)
        {
            PG p;
            p.get_data();
            p.show();
        }
    }
    return 0;
}