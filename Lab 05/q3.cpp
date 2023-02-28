#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real, imaginary;
    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.imaginary = C1.imaginary + C2.imaginary;
        return temp;
    }
};

int main()
{
    int x, y;

    cout << "Enter 1st complex number, real and imaginary separated by a space: ";
    cin >> x >> y;
    Complex C1(x, y);

    cout << "Enter 1st complex number, real and imaginary separated by a space: ";
    cin >> x >> y;
    Complex C2(x, y);

    Complex C3;

    C3 = C3.addComp(C1, C2);

    cout << "Sum of complex number : "<< C3.real << " + i"<< C3.imaginary;
}