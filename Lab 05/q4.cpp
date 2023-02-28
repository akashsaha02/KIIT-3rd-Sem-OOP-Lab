#include <iostream>
using namespace std;

class fibo
{
private:
    int f1, f2, f;

public:
    fibo()
    {
        f1 = 0;
        f2 = 1;
        f = f1 + f2;
    }

    fibo(fibo &ptr)
    {
        f1 = ptr.f1;
        f2 = ptr.f2;
        f = ptr.f;
    }

    void increment()
    {
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    void show()
    {

        cout << f << " ";
    }
};

int main()
{
    int i, n;
    fibo number;

    cout << "Enter number of terms to print fibonacci numbers: ";
    cin >> n;
    cout << "0 1 ";
    for (i = 0; i < n - 2; i++)
    {
        number.show();
        number.increment();
    }
    return 0;
}