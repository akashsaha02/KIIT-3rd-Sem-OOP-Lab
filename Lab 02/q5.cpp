#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int &varname = n;
    cout << "n = " << n << "   varname = " << varname << '\n'; // without changing value
    n = n + 2;
    cout << "n = " << n << "  varname = " << varname << '\n'; // changing n value
    varname = 50;
    cout << "n = " << n << "  varname = " << varname << '\n'; // changing alias value
    return 0;
}