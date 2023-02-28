#include <iostream>
using namespace std;
int main()
{
    int size = 25;
    char name[size];

    cout << "Enter full name again: "<<endl;
    cin.getline(name, size);
    cout << "Full name now: " << name << endl;

    cout << "Enter new full name: ";
    cin.getline(name, size);
    cout << "new full name: " << name << endl;

    return 0;
}