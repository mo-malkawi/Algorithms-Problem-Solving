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
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short DaysInMonth(short Year, short Month)
{ 
    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadMonth()
{
    short Month;
    do
    {
        cout << "\nPlease enter a month to check. ";
        cin >> Month;
    } while (Month < 1 || Month > 12);

    return Month;
}

int main()
{
    short Year = ReadYear();

    short Month = ReadMonth();

    cout << "\nNumber of Days in Month [" << Month << "] is " << DaysInMonth(Year, Month);

    system("pause>0");

}