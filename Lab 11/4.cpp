// 3
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    streampos begin, end;
    ifstream myfile("example.bin", ios::binary);
    begin = myfile.tellg();
    myfile.seekg(0, ios::end);
    end = myfile.tellg();
    myfile.close();
    cout << "size is: " << (end - begin) << " bytes.\n";
    myfile.open("example.bin", ios::binary);
    myfile.seekg(2, ios::beg);
    int n = myfile.tellg();
    cout << "Reading from second position: ";
    cout << n << endl;
    myfile.seekg(-3, ios::cur);
    n = myfile.tellg();
    cout << "Reading from third position: ";
    cout << n << endl;
    myfile.close();
    return 0;
}