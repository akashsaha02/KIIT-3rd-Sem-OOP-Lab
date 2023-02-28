#include <iostream>
using namespace std;
class writter
{
public:
    virtual void example() = 0;
};

class c : public writter
{
public:
    void example()
    {
        cout << " Text book written by belaguru.";
    }
};

class oops : public writter
{
public:
    void example()
    {
        cout << "C++ text BOOK written by writter";
    }
};

int main()
{
    c el;
    oops e2;
    el.example();
    e2.example();
}