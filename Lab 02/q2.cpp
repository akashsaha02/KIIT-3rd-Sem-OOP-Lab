#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct student
{
    int age;
    char name[100];
};
int main()
{
    int i, n;
    cout << "Enter the student number: ";
    cin >> n;
    struct student s[n];
    cout << "\n\n";
    for (i = 0; i < n; i++)
    {
        cout << "For student no " << i + 1 << endl;
        cout << "Enter the name of the student: ";
        cin >> s[i].name;
        cout << "Enter the age of the student: ";
        cin >> s[i].age;
    }
    cout << "\n\n";
    cout << "Displaying information\n\n";
    for (i = 0; i < n; i++)
    {
        cout << "No " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "\n\n";
    }
    return 0;
}