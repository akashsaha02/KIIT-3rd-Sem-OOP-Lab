#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Club");
    fout << "Real Madrid\n";
    fout << "Bayern Munich\n";
    fout << "Manchester city\n";

    fout.open("Club");

    fout.close();
    fout.open("Manager");
    fout << "Akash" << endl;
    fout << "Sorup" << endl;
    fout << "Sourov" << endl;

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("Players");

    cout << "contents of  file\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }
    fin.close();
    fin.open("Manager");
    cout << "\nContents of capital file \n";
    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }
    fin.close();
    return 0;
}