#include <iostream>
using namespace std;
class array
{
private:
    int arr[10];
    int size;

public:
    array();
    array(int);
    void show_data();

    array operator+(array &);
};
array::array()
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    size = 0;
}
array::array(int n)
{
    size = n;
    cout << "Enter the array elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void array::show_data()
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
array array ::operator+(array &A)
{
    array temp;
    temp.size = size;
    for (int i = 0; i < size; i++)
    {
        temp.arr[i] = arr[i] + A.arr[i];
    }
    return temp;
}
main()
{
    int n;
    cout << "Enter the size of the arrays: \n";
    cin >> n;
    array A1(n), A2(n), A3;
    A3 = A1 + A2;
    cout << "The resultant array is \n";
    A3.show_data();
    return 0;
}
