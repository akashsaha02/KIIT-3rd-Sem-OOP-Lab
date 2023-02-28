


#include <iostream>
using namespace std;
class mattrix
{
private:
    int arr[2][2];

public:
    mattrix();
    void getdata();
    void show();
    int &operator()(int i, int j);
};
mattrix::mattrix()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] = 0;
        }
    }
}
void mattrix::getdata()
{
    cout << "enter the mattrix elements: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void mattrix::show()
{
    cout << "enter the mattrix elements: ";
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j]<<" ";
        }
    }
}
int &mattrix::operator()(int i, int j)
{
    if (i < 0 || i > 9 || j < 0 || j > 9)
    {
        cout << "\nMattrix index is out of bounds";
        exit(1);
    }
    else
    {
        return arr[i][j];
    }
}
int main()
{
    mattrix m;
    m.getdata();
    m.show();
    cout << "\nModified mattrix elements are: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {

                cout << " " << m(i, j) * 2;
            }
        }
    }
    return 0;
}