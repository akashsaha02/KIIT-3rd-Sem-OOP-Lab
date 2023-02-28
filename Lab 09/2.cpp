#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class matrix
{
private:
    double data[4][4];

public:
    matrix()
    {
        for (int col = 0; col < 4; col++)
            for (int row = 0; row < 4; row++)
                data[row][col] = 0.0;
    }
    double &operator()(int c, const int r)
    {
        if ((c >= 0) && (c < 4))
            if ((r >= 0) && (r < 4))
                return data[r][c];
    }
    void operator()()
    {
        for (int col = 0; col < 4; col++)
            for (int row = 0; row < 4; row++)
                data[row][col] = 0.0;
    }
};

int main()
{
    matrix m;
    m(1, 2) = 4.5;
    cout << "Value at M[1][2] is: " << m(1, 2) << endl;
    m();
    cout << "Value at M[1][2] is: " << m(1, 2) << endl;
}