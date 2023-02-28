#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string line;
	ifstream myfile("example.txt");
	ofstream myfile2("output.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (int i = 0; i < line.size(); i++)
			{
				if (line[i] >= 'a' && line[i] <= 'z')
				{
					line[i] = line[i] - 32;
				}

				myfile2 << line << '\n';
			}
			myfile.close();
			myfile2.close();
		}
	}
	else
		cout << "Unable to open file";
	return 0;
}