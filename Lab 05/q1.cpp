//q1(a)

// #include <iostream>
// using namespace std;

// class area
// {
//     int l, b;

// public:
//     void get()
//     {
//         cout << "Enter the lenth and breadth of a rectangle : ";
//         cin >> l >> b;
//     }
//     friend float calculate(area rect);
// };

// float calculate(area rect)
// {
//     return rect.l * rect.b;
// }

// int main()
// {
//     area object;
//     object.get();
//     cout << "\nArea of rectangle : " << calculate(object);
// }


//q1(b)
#include <iostream>
using namespace std;

class rect
{
    float l, b, area; // data members
public:
    rect()
    {
        cout << "\n Enter length and breadth : ";
        cin >> l >> b;
    }
    void calculate(); // member function
    void display();   // member function
};
inline void rect ::calculate() // accessing data members of a class rect
{
    area = l * b;
}
inline void rect ::display()
{
    cout << "\n Area of rectangle: " << area;
}
int main()
{
    rect cr;        
    cr.calculate(); 
    cr.display();
    return 0;
}