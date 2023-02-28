#include <iostream>
using namespace std;
class p1
{
public:
    void display()
    {
        cout << "This is parent 1" << endl;
    }
};
class p2
{
public:
    void display()
    {
        cout << "This is parent 2" << endl;
    }
};
class c1 : public p1, public p2
{
public:
    void c_display()
    {
        cout << "This is child class" << endl;
    }
};
int main()
{
    c1 obj;
    obj.p1 ::display();
    obj.p2 ::display();
    obj.c_display();
}
