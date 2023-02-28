

#include <iostream> //1
using namespace std;
class Array
{
private:
    int arr[5];

public:
    Array();
    void get_data();
    void show_data();
    int &operator[](int i);
};

Array::Array()
{
    for (int i = 0; i < 5; i++)
        arr[i] = 0;
}

void Array::get_data()
{
    cout << "\n Enter the array elements: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
}

void Array ::show_data()
{
    cout << "\n The Array is: ";
    for (int i = 0; i < 5; i++)
        cout << " " << arr[i];
}

int &Array::operator[](int i)
{
    return arr[i]; // returns value at specified index
}

main()
{
    Array A;      // create object
    A.get_data(); // invokes member function
    A.show_data();
    cout << "\n Modified Array Elements Are: ";
    for (int i = 0; i < 5; i++)
        cout << " " << A[i] * 2;
}
