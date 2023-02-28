#include <iostream>
using namespace std;
class ddistance
{
public:
    int inch;
    int feet;

    ddistance add(ddistance c5)
    {
        inch = inch + c5.inch;
        feet = feet + c5.feet;
        if (inch >= 12)
        {

            feet = feet + inch / 12;
            inch = inch % 12;
        }

        cout << feet << ":" << inch;
    }
};
int main()
{
    ddistance c1, c2, c3;
    cout << "Enter 1st feet : ";
    cin >> c1.feet;
    cout << "Enter 1st inch : ";
    cin >> c1.inch;
    cout << "Enter 2nd feet :";
    cin >> c2.feet;
    cout << "Enter 2nd inch : ";
    cin >> c2.inch;

    c3 = c1.add(c2);

    return 0;
}