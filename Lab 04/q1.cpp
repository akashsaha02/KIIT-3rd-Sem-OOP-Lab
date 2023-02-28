#include <iostream>
using namespace std;
class nesting
{
public:
    char name[20];
    char name2[20];
    void readname(void)
    {
        cout << "please enter your first name: ";
        cin >> name;
    }
    void readname2(void)
    {
        readname();
        cout << "please enter your second name: ";
        cin >> name2;
    }
    void display(void)
    {
        readname2();
        cout << "Fullname: " << endl;
        cout << name << " " << name2;
    }
};
int main()
{
    nesting obj_name;
    obj_name.display();
}