#include <iostream>
using namespace std;
class number
{
private:
    int x;

public:
    number()
    {
        x = 0;
    }
    number(int n)
    {
        x = n;
    }
    number operator-()
    {
        number temp;
        temp.x=-x;
        return temp;
    }
    void show()
    {
        cout << "\nx= " << x;
    }
};
main()
{
    number n(-10), n2;
    n2=-n;
    n2.show();
}