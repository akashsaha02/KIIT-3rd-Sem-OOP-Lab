#include <iostream>
using namespace std;
class ddistance
{
public:
    int inch;
    int feet;
    void add(ddistance c4, ddistance c5)
    {
        inch = c4.inch + c5.inch;
        feet = c4.feet + c5.feet;
        if (inch >= 12)
        {
            int addfeet;
            addfeet = inch / 12;
            feet = feet + addfeet;
            inch = inch % 12;
        }
        cout << feet << ":" << inch;
    }
};
int main()
{
    ddistance c1;
    ddistance c2;
    ddistance c3;
    cout << "Enter 1st feet : ";
    cin >> c1.feet;
    cout << "Enter 1st inch : ";
    cin >> c1.inch;
    cout << "Enter 2nd feet :";
    cin >> c2.feet;
    cout << "Enter 2nd inch : ";
    cin >> c2.inch;
    c3.add(c1, c2);

    return 0;
}