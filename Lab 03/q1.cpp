#include <iostream>
using namespace std;
void conv(int a);
int main()
{
    int num;
    do
    {
        cout << "\nEnter the number = ";
        cin >> num;
        if (num > 0)
            conv(num);
    } while (num != 999);
}

void conv(int a)
{
    int temp[20];
    int i = 0;

    while (a != 0)
    {
        temp[i] = a % 2;
        a /= 2;
        i++;
    }
    cout << "Binary Equivalent is \"";
    for (i = i - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
    cout << "\"";
}