#include <iostream>
using namespace std;

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
        cout << "\nPlease enter a month. ";
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

bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year, short Month)
{
    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short NumberOfDaysFromTheBeginningOfTheYear(short Day , short Month , short Year)
{

    short NumberOfDays = 0;

    for (short i = 1; i < Month; i++)
    {
        NumberOfDays += NumberOfDaysInAMonth(Year,i);
    }

    return NumberOfDays + Day;

}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    printf("\nNumber of days from the beginning of the year is %d\n", NumberOfDaysFromTheBeginningOfTheYear(Day, Month, Year));

}
