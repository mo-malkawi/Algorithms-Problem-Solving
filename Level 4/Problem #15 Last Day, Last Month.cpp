#include <iostream>
using namespace std;

struct stDate
{
    short Day;
    short Month;
    short Year;

};

short ReadYear()
{
    short Year;

    cout << "Please enter a year. ";
    cin >> Year;

    return Year;
}

short ReadMonth()
{
    short Month;
    do
    {
        cout << "Please enter a month. ";
        cin >> Month;
    } while (Month < 1 || Month > 12);

    return Month;
}

short ReadDay()
{
    short Day;

    cout << "\nPlease enter a day. ";
    cin >> Day;

    return Day;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
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

bool IsLastDayInMonth(stDate Date)
{
    return Date.Day == DaysInMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(short Month)
{
    return Month == 12;
}

int main()
{
    stDate Date = ReadFullDate();
    
    if (IsLastDayInMonth(Date))
        cout << "\nYes, Day is the last day in the month";
    else
        cout << "\nNo, Day is NOT the last day in the month";

    if (IsLastMonthInYear(Date.Month))
        cout << "\nYes, Month is the last month in the year\n";
    else
        cout << "\nNo, Month is NOT the last month in the year\n";

}