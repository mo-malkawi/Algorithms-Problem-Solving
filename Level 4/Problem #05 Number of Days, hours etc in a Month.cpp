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

short DaysInMonth(short Year , short Month)
{
    if (Month == 2)
    {
        return IsLeapYear(Year) ? 29 : 28;
    }

    if (Month == 4 || Month == 6 || Month == 9 || Month == 11 )
    {
        return 30;
    }
    
        return 31;

}

short HoursInMonth(short Year, short Month)
{
    return DaysInMonth(Year,Month) * 24;
}

int MinutesInMonth(short Year , short Month)
{
    return HoursInMonth(Year , Month) * 60;
}

int SecondsInMonth(short Year, short Month)
{
    return MinutesInMonth(Year, Month) * 60;
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

    cout << "\nNumber of Days in Month [" << Month << "] is " << DaysInMonth(Year,Month);
    cout << "\nNumber of Hours in Month [" << Month << "] is " << HoursInMonth(Year, Month);
    cout << "\nNumber of Minutes in Month [" << Month << "] is " << MinutesInMonth(Year, Month);
    cout << "\nNumber of Seconds in Month [" << Month << "] is " << SecondsInMonth(Year, Month);

    system("pause>0");

}