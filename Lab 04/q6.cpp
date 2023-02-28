#include <iostream>
using namespace std;
class complex
{
public:
    int realno;
    int imaginaryno;
};
int main()
{
    class complex cno[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the real no portion :";
        cin >> cno[i].realno;
        cout << "Enter the imaginary no portion [__]i :";
        cin >> cno[i].imaginaryno;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " no complex no : " << cno[i].realno << "+" << cno[i].imaginaryno << "i"
             << "\n";
    }
    return 0;
}