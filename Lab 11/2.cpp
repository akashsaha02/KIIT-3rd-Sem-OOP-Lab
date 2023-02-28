#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream f1, f2, f3;
    string ch;
    f1.open("file1.txt", ios::in);
    f2.open("file2.txt", ios::out);

    while (!f1.eof())
    {
        getline(f1, ch);
        f2 << ch << endl;
    }
    f1.close();
    f2.close();
    f2.open("file2.txt", ios::in);
    f3.open("file3.txt", ios::out);
    while (!f2.eof())
    {
        getline(f2, ch);
        f3 << ch << endl;
    }
    f2.close();
    f3.close();

    return 0;
}