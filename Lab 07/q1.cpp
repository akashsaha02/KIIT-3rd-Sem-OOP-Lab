#include <iostream>
using namespace std;
class shape
{
protected:
    double x, y;

public:
    void set_dim(double i, double j = 0)
    {
        x = i;
        y = j;
    }
    virtual void show_area(void)
    {
        cout << "No area computation found" << endl
             << "for this class";
    }
};
class triangle : virtual public shape
{
public:
    void virtual show_area(void)
    {
        cout << "The area of triangle is: " << x * 0.5 * y << endl;
    }
};
class square : virtual public shape
{
public:
    void virtual show_area(void)
    {
        cout << "The area of square is: " << x * x << endl;
    }
};
class circle : virtual public shape
{
public:
    void virtual show_area(void)
    {
        cout << "The area of circle is: " << 3.14 * x * x << endl;
    }
};
main()
{
    shape *p;
    triangle t;
    square s;
    circle c;

    p = &t;
    p->set_dim(10, 5);
    p->show_area();

    p = &s;
    p->set_dim(8);
    p->show_area();

    p = &c;
    p->set_dim(7);
    p->show_area();
}