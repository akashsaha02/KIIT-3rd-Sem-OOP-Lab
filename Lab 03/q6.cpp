#include <iostream>
using namespace std;

int volume(float a);
int volume(float a, int b);
int volume(int a, int b, int c);
float pi = 22 / 7;

int main()
{
    int l, b, h, hc;
    float rc, rs;
    cout << "Enter the radious and height of cylinder :- " << endl;
    cin >> rc >> hc;
    cout << "Enter the radious of sphere :- " << endl;
    cin >> rs;
    cout << "Enter the length, breadth and height of cuboid :- " << endl;
    cin >> l >> b >> h;

    cout << "Area of cylinder :- " << volume(rc, hc) << endl;
    cout << "Area of sphere :- " << volume(rs) << endl;
    cout << "Area of cuboid :- " << volume(l, b, h) << endl;

    return 0;
}

int volume(float a)
{
    float vol;
    vol = (4 * ::pi * a * a * a) / 3;
    return vol;
}

int volume(float a, int b)
{
    float vol;
    vol = ::pi * a * a * b;
    return vol;
}

int volume(int a, int b, int c)
{
    float vol;
    vol = a * b * c;
    return vol;
}