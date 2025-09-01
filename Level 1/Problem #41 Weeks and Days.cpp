#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float number = 0;

	do
	{
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float HoursToDays(float Hours)
{
	return (float)Hours / 24;
}

float HoursToWeeks(float Hours)
{
	return (float)Hours / (24 * 7);
}

float DaysToWeeks(float Days)
{
	return (float)Days / 7;
}


int main()
{

	float Hours = ReadPositiveNumber("Please enter number of hours.");
	float Days = HoursToDays(Hours);
	float Weeks = DaysToWeeks(Days);

	cout << endl;
	cout << "Total Hours = " << Hours << endl;
	cout << "Total Days = " << Days << endl;
	cout << "Total Weeks = " << HoursToWeeks(Hours) << endl;

}
