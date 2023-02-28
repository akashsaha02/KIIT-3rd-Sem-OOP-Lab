#include <iostream>
using namespace std;
class Student
{
    int roll;
    int marks;

public:
    void getdata();
    void putdata();
};

void Student ::getdata()
{
    cout << "Enter the roll no:" << endl
         << "Enter the marks" << endl;
    cin >> roll >> marks;
}
void Student ::putdata()
{
    cout << "Roll no : " << roll << endl;
    cout << "Marks : " << marks << endl;
}
const int size = 10;
int main()
{
    int i;
    Student st[size];
    for (i = 0; i < size; i++)
    {
        cout << "\nDetails of students" << i + 1 << endl;
        st[i].getdata();
    }
    cout << "\n";
    for (i = 0; i < size; i++)
    {
        cout << "\nStudents" << i + 1 << endl;
        st[i].putdata();
    }
    return 0;
}