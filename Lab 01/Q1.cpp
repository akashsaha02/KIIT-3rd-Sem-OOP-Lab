#include <iostream>
using namespace std;
class student
{
public:
    char name[50];
    int roll;
    float marks[5];
};

int main()
{
    student s;
    cout << "Enter information:\n";
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> s.marks[i];
    }

    cout << "Displaying Information:\n";
    cout << "Name: ";
    cout << s.name <<endl;
    cout << "Roll number: ";
    cout << s.roll <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks: ";
        cout << s.marks[i] <<endl;
    }
    return 0;
}