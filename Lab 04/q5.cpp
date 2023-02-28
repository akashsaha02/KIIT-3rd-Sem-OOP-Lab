#include <iostream>
using namespace std;

class factorial
{
    int fact = 1;

public:
    int cal_fact(int);
    void show();
};
int main()
{
    int f;
    cout << "Enter the no you want the factorial of:" << endl;
    cin >> f;
    factorial f1;
    f = f1.cal_fact(f);

    cout << "the factorial is :" << f;
    return 0;
}

int factorial ::cal_fact(int f)
{
    if (f == 0)
    {
        return 1;
    }
    return (f * factorial ::cal_fact(f - 1));
}