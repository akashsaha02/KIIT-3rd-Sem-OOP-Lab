#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outf("New_file");
    
    char name[20];
    cout<<"Enter name: ";
    cin.getline(name, 20);

    outf<<name<<endl;

    int age;
    cout<<"Enter age: ";
    cin>>age;

    outf<<age<<endl;
    outf.close();

    ifstream inf("New_file");
    inf>>name;
    inf>>age;
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;

    inf.close();
    return 0;

}