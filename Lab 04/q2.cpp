#include <iostream>
using namespace std;
class item
{
    static int count;
    int num;

public:
    void getdata(void)
    {
        count++;
    }
    void getcount(void)
    {
        cout << "Count : " << count << "\n";
    }
};

int item ::count;
int main()
{
    item a, b, c, d;
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();

    a.getdata();
    b.getdata();
    c.getdata();
    d.getdata();

    cout << "After reading data : "<<endl;

    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    return 0;
}