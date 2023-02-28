#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int reg_no;
    char name[20];

public:
    void setregno()
    {
        cout << "\nEnter the registration number: ";
        cin >> reg_no;
    }
    void setname()
    {
        cout << "\nEnter the name of the student: ";
        cin >> name;
    }
    int getregno()
    {
        return reg_no;
    }
    char *getname()
    {
        return name;
    }
};

int main()
{
    ofstream sfill("studfile.dat");
    char ch;
    student s;
    while (1)
    {
        cout << "Want to enter new or more records\n";
        cin >> ch;
        if (ch == 'n')
            break;
        s.setregno();
        s.setname();
        sfill.write((char *)&s, sizeof(student));
    }
    sfill.close();
    cout << "Do you want to view the contents of a file (y/n)/";
    cin >> ch;
    if (ch == 'y')
    {
        ifstream sfill("studfile.dat");
        sfill.read((char *)&s, sizeof(student));
        while (sfill)
        {
            cout << "\nRegistration number is: " << s.getregno();
            cout << "\nStudent name is: " << s.getname();
            sfill.read((char *)&s, sizeof(student));
        }
    }
    return 0;
}