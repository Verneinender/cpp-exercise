#include <iostream>
#include <string>
using namespace std;
int main()
{
	struct CandyBar
	{
		string brand;
		double weight;
		int caroli;
	};
	CandyBar snack
	{
		"M M",
	2.3,
	350
	};
	cout << snack.brand<< endl;
}