#include <iostream>
using namespace std;
class StaticFunc
{
	int code;
	static int count;

	public:
		void setcode()
		{
			code=++count;
		}
		void showcode()
		{
			cout << " Object Number: " << code <<endl;
		}
		static void showcount()
		{
			cout << "count: " << count <<endl;
		}
};
int StaticFunc ::count;
int main()
{
	StaticFunc obj1,obj2;

	obj1.setcode();
	obj2.setcode();

	StaticFunc :: showcount();

	StaticFunc obj3;
	obj3.setcode();

	StaticFunc :: showcount();

	obj1.showcode();
	obj2.showcode();
	obj3.showcode();

	return 0;
}