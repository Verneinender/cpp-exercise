/*The Earth's orbit around the Sun has a period of 365.24219 days, 
i.e. a tropical year. The common year is only 365 days long,
which is about 0.2422 days shorter than the tropical year, 
and the remaining time is about one day accumulated every four years.
However, the addition of one day to the fourth year is 0.0312 days more than 
the four tropical years, which will result in 3.12 days more in 400 years, 
so there will be three fewer leap years in 400 years, 
which means that there will only be 97 leap years in 400 years. 
So that a year must be a multiple of 400 to be a leap year if it is a whole hundred;
a century year that is not a multiple of 400 is not a leap year, 
even if it is a multiple of 4.
Translated with www.DeepL.com/Translator (free version)*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int year;
	bool isleapyear;
	
	for (string yes_or_no = "y";yes_or_no == "y";cin>>yes_or_no)
	{
		cout << "please enter the year:  ";
		cin >> year;
		isleapyear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
		if (isleapyear)
			cout << year << " is a leap year" << endl;
		else
			cout << year << " is a commom year" << endl;
		cout << "do you want to go on? y or n?" << endl;

	}

	return 0;

}