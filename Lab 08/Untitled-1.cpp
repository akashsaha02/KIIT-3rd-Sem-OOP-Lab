#include <iostream>
using namespace std;
class sign
{
public:
    int x;
    sign() { x = 0; }
    sign(int n) { x = n; }
    sign operator-(sign b)
    {
        sign temp;
        temp.x = x - b.x;
        return temp;
    }
    void showData()
    {
        cout << x << endl;
    }
};
int main()
{
    sign a(420), b(69), c;
    a.showData();
    b.showData();
    c = a - b;
    c.showData();
    return 0;
}