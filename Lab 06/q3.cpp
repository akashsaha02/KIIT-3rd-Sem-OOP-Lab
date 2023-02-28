#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 0;
    }
    A(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "\n a=" << a;
    }
};
class B : public A
{
    int b;

public:
    B() : A()
    {
        b = 0;
    }
    B(int x, int y) : A(x)
    {
        b = y;
    }
    void show()
    {
        A::show();
        cout << "\n b=" << b;
    }
};
int main()
{
    B obj(10, 20);
    obj.show();
}