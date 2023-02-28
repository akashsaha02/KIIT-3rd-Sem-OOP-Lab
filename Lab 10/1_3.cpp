#include <bits/stdc++.h>
using namespace std;
int main()
{
    char *s1 = "C++ ";
    char *s2 = "Programming";
    int m = strlen(s1);
    int n = strlen(s2);

    for (int i = 0; i < n; i++)
    {
        cout.write(s2, i);
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        cout.write(s2, i);
        cout << endl;
    }
    cout.write(s1, m).write(s2, n);
    cout << endl;
    cout.write(s1, 10);
}