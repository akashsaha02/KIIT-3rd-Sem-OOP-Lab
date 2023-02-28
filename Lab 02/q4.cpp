#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int x = 10; // global declaration
int main()
{
    int x = 20; // local declaration inside main fun
    {
        //inner block
        int y = x;
        int x = 30; // value change
        cout << "value of y: " << y << endl;
        cout << "value of local x: " << x << endl;
        cout << "value of global x: " << ::x << endl;
    }
    // outer block
    cout << "value of local x: " << x << endl; //local
    cout << "value of global x: " << ::x << endl; //global
    return 0;
}