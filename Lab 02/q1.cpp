#include <bits/stdc++.h>
using namespace std;
struct student
{
    int age;
    char name[100];
};
int main()
{
    struct student s;
    cout << "Enter the name of the student: ";
    cin >> s.name;
    cout << "Enter the age of the student: ";
    cin >> s.age;
    cout << "\n\n";
    cout << "Displaying information\n\n";
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    return 0;
}