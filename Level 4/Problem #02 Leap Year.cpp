#include <iostream>
using namespace std;

short ReadYear()
{
	short Year;

	cout << "Please enter a year to check. ";
	cin >> Year;

	return Year;
}

bool IsLeapYear(short Year)
{
	if (Year % 400 == 0)
	{
		return true;
	}
	else if (Year % 4 == 0 && Year % 100 != 0)
	{
		return true;
	}
	else
		return false;
	
}

int main()
{
	short Year = ReadYear();

	if (IsLeapYear(Year))
	{
		cout << "Yes, Year [" << Year << "] is a Leap Year";
	}
	else
	{
		cout << "No, Year [" << Year << "] is NOT a Leap Year";
	}

	system("pause>0");
}
