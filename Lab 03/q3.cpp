#include <bits/stdc++.h>
using namespace std;
void swap(int, int);
int main()
{
    int a = 1, b = 2;

    cout << "Before Swapping value:" << endl;
    cout << "A = " << a << endl
         << " B = " << b << endl;

    swap(a, b);

    cout << "After Swapping value:" << endl;
    cout << "A = " << a << endl
         << " B = " << b << endl;
}

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}