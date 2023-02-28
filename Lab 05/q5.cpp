#include <iostream>
using namespace std;
class sum
{
public:
    sum(int a, int b);
};
sum ::sum(int a, int b)
{
    int m = a + b;
    cout << m;
}
int main()
{
    int ii;
    cout << "For implicit call press 1 & for explicit press 2 :" << endl;
    cin >> ii;
    if (ii == 1)
    {
        sum k = sum(11, 23);
    }
    else if (ii == 2)
    {
        sum l(50, 45);
    }
    return 0;
}