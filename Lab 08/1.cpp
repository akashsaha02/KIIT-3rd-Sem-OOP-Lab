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
    void operator-()
    {
        x = -x;
    }
    void show()
    {
        cout << "\nx= " << x;
    }
};
main()
{
    number n(7);
    n.show();
    -n;
    n.show();
    return 0;
}