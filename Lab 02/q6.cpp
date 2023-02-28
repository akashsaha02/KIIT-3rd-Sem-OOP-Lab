#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int *arr;
    arr = new int(4);
    cout << *arr << endl;
    cout << "Enter the value " << endl;
    cin >> *arr;
    cout << "value after asigning " << *arr << endl;
    delete arr;
    cout << "Value after deleting " << arr << endl;
    return 0;
}