#include <fstream>
#include <iostream>
using namespace std;
class student
{
private:
    int iReg_no;
    char cName[20];

public:
    void setRegno()
    {
        cout << "\nEnter the Registration Number :";
        cin >> iReg_no;
    }
    void setName()
    {
        cout << "\nEnter the name of the student :";
        cin >> cName;
    }
    int getRegno()
    {
        return iReg_no;
    }
    char *getName()
    {
        return cName;
    }
};

int main()
{
    ofstream Sfill("studfile.dat");
    char ch;
    student Svar;
    while (1)
    {
        cout << "Want to enter new or more records\n";
        cin >> ch;
        if (ch == 'n')
            break;
        Svar.setRegno();
        Svar.setName();

        Sfill.write((char *)&Svar, sizeof(student));
    }
    Sfill.close();
    cout << "\nDO you want to view the contents of a file (y/n)?";
    cin >> ch;
    if (ch == 'y')
    {
        ifstream Sfill("studfile.dat");
        Sfill.read((char *)&Svar, sizeof(student));
        while (Sfill)
        {
            cout << "\nRegistration Number is " << Svar.getRegno();
            cout << "\nStudent name is " << Svar.getName();
            Sfill.read((char *)&Svar, sizeof(student));
        }
    }
    return 0;
}