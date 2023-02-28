#include <bits/stdc++.h>
using namespace std;
int &swap(int &, int &);
int main()
{
    int a = 1, b = 2;

    cout << "Before swapping\n"
         << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "After swapping\n"
         << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
int &swap(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}