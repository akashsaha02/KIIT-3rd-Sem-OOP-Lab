#include <iostream>
using namespace std;

class test
{
public:
    static int p;
    static int q;
    test()
    {
        p++;
        cout << "No. of object created:-" << p << endl;
    }
    ~test()
    {
        q++;
        cout << "No. of object destroyed:- " << q << endl;
    }
};
int test::p = 0;
int test::q = 0;
int main()
{
    test *t1 = new test;
    test t2;
    test *t3 = new test;
    {
        test t5;
        test t6;
        test t7;
    }
    test *t4 = new test;
    delete t1;
    delete t3;
    delete t4;
    return 0;
}
