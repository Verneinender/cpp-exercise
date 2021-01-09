#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int higth_ft = 0;
	int higth_in = 0;
	int higth = 0;
	const int convert = 12;
	cout << "input your higth:\n";
	cin >> higth_ft;
	cout << "your higth is:  " << higth_ft / convert << "   inches   "
		<< higth_ft % convert << "   feet" << endl;
	return 0;
}