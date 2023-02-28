#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    string s;
    int roll, age;

public:
    void get_data(string x, int a, int b)
    {
        roll = a;
        age = b;
        s = x;
    }

    void put_data()
    {
        cout << "Name: " << s << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Age: " << age << endl;
    }
};
class test : virtual public student
{
protected:
    float m1, m2, m3, m4, m5;

public:
    void get_marks(float x1, float x2, float x3, float x4, float x5)
    {
        m1 = x1;
        m2 = x2;
        m3 = x3;
        m4 = x4;
        m5 = x5;
    }

    void put_marks()
    {
        cout << "Marks Obtained: \n"
             << endl;
        cout << "m1 = " << m1 << endl
             << "m2 = " << m2 << endl
             << "m3 = " << m3 << endl
             << "m4 = " << m4 << endl
             << "m5 = " << m5 << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }

    void put_score()
    {
        cout << "Sports Score: \n"
             << score << "\n\n";
    }  
};
class result : virtual public test, virtual public sports
{
private:
    float total;

public:
    void display()
    {
        total = m1 + m2 + m3 + m4 + m5 + score;
        put_data();
        put_marks();
        put_score();
        cout << "Total Score: " << total << "\n";
    }
};
int main()
{

    result student;
    int x1, x2, x3, x4, x5, roll, age, s;
    string nm;
    cout << "Enter name: " << endl;
    cin >> nm;
    cout << "Enter roll: " << endl;
    cin >> roll;
    cout << "Enter age: " << endl;
    cin >> age;
    cout << "Enter marks for 5 sub: " << endl;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << "Enter sport mark: ";
    cin >> s;
    student.get_data(nm, roll, age);
    student.get_marks(x1, x2, x3, x4, x5);
    student.get_score(s);
    student.display();
    return 0;
}