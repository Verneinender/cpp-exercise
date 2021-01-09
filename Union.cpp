
#include<iostream>
#include<string>
using namespace std;
int main()
{
	union lol
	{
		int k;
		struct { int x; int y; int z; }u;
	};
	lol a;
	a.u.x = 1;
	a.u.y = 2;
	a.u.z = 3;
	a.k = 4;// they have the same memory address,so a.k will overwrite the first int. i.e. a.u.x
	cout << a.u.x << a.u.y << a.u.z << a.k << endl;
	return 0;

}