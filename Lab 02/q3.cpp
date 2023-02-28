#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 100;   // int type
    char b = 'a';  // char type
    int c = a + b; // int type will implicitly convert into ascii code
    cout << "Implicit typecasting of int to ascii: " << endl
         << c << endl;

    cout << "\n";

    int d;         // int type
    float e = 5.3; // float type
    d = (int)e;    // explicitly converting float to int
    cout << "Explicit typecasting of float to int: " << endl
         << d;

    return 0;
}