#include <iostream>
using namespace std;
int area(int);
int area(int, int);
int main()
{
    int s, l, b;
    cout << "Enter square's length: ";
    cin >> s;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of square is" << area(s) << "\n";
    cout << "Area of rectangle is " << area(l, b);
}
int area(int s)
{
    return (s * s);
}
int area(int l, int b)
{
    return (l * b);
}