#include<iostream>
using namespace std;
class Ufriend
{
    int a=10;
    int b=20;
    int c=30;
    public:
    void get_data()
    {
        cout<<"Values of A,B & C\n";
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void friend operator-(Ufriend &x);
};
void operator-(Ufriend &x)
{
    x.a=-x.a;
    x.b=-x.b;
    x.c=-x.c;
}
int main()
{
    Ufriend x1;
    x1.get_data();
    cout<<"Before overloading"<<endl;
    x1.show();
    cout<<"After overloading"<<endl;
    -x1;
    x1.show();
    return 0;
}