#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0,int e=0)
{
    return a+b+c+d+e;
}
int main()
{
    int x,y,z,w,p;
    cout<<"Enter 1st no : ";
    cin>>x;
    cout<<endl<<"Enter 2nd no : ";
    cin>>y;
    cout<<endl<<"sum of 2 no : "<<sum(x,y);
    cout<<endl<<"Enter 3nd no : ";
    cin>>z;
    cout<<endl<<"sum of 3 no : "<<sum(x,y,z);
    cout<<endl<<"Enter 4th no : ";
    cin>>w;
    cout<<endl<<"sum of 4 no : "<<sum(x,y,z,w);
    cout<<endl<<"Enter 5th no : ";
    cin>>p;
    cout<<endl<<"sum of 5 no : "<<sum(x,y,z,w,p);
    return 0;
}
