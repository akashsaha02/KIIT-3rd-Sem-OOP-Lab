#include <iostream>
using namespace std;
int& returnValue(int& x)
{

	// Print the address
	cout << "x = " << x
		<< " The address of x is "
		<< &x << endl;

	// Return reference
	return x;
}
int main()
{
	int a = 25;
	int &b = returnValue(a);

	// Print a and its address
	cout << "a = " << a
		<< " The address of a is "
		<< &a << endl;

	// Print b and its address
	cout << "b = " << b
		<< " The address of b is "
		<< &b << endl;

	// We can also change the value of
	// 'a' by using the address returned
	// by returnValue function

	// Since the function returns an alias
	// of x, which is itself an alias of a,
	// we can update the value of a
	returnValue(a) = 15;

	// The above expression assigns the
	// value to the returned alias as 3.
	cout << "a = " << a
		<< " The address of a is "
		<< &a << endl;

        cout << "b = " << b
		<< " The address of b is "
		<< &b << endl;

	return 0;
}
