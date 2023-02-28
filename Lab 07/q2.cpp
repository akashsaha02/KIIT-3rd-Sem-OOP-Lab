// create a class which store employee salary.
// Derive two class from 'Employee' class : Regular and part-time .
// The Regular class stores DRA , HRA and Basic salary.
// The part-time class store the number of hours and pay per hour .
// Calculate the salary of a regular employee and a part-time employee ,using vitrual function
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    string name;
    int id;

public:
    void inputdata1()
    {
        cout << "Enter Employee Name : ";
        cin >> name;
        cout << "Enter Employee ID : ";
        cin >> id;
    }
    void showdata1()
    {
        cout << "Enter Employee Name : " << name << endl;
        cout << "Enter Employee ID : " << id << endl;
    }
};
class Regular : virtual public Employee
{
    int DRA, HRA, Basic_salary, total;

public:
    void getbasic_salary()
    {
        cout << "Enter Employee salary : ";
        cin >> Basic_salary;
    }
    void showregular()
    {
        DRA = 0.8 * Basic_salary;
        HRA = 0.1 * Basic_salary;
        total = DRA + HRA;
        cout << "Basic salary of Empolyee : " << Basic_salary << endl;
        cout << "DRA of Empolyee : " << Basic_salary << endl;
        cout << "HRA of Empolyee : " << Basic_salary << endl;
        cout << "Total salary : " << total << endl;
    }
};
class part_time : virtual public Employee
{
    int hour, pay, total;

public:
    void getdata()
    {
        cout << "Enter how many hours he/she works for part time : ";
        cin >> hour;
        cout << "Enter money to pay for part time works : ";
        cin >> pay;
    }
    void showdata2()
    {
        total = hour * pay;
        cout << "working Hour  : " << hour << "\n";
        cout << "money for working hour : " << total << "\n";
    }
};
class Result : public Regular, public part_time
{
public:
    void inputdata()
    {
        inputdata1();
        getbasic_salary();
        getdata();
    }
    void showdata()
    {
        showdata1();
        showregular();
        showdata2();
    }
};
int main()
{
    Result r;
    r.inputdata();
    r.showdata();
    return 0;
}