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

    cout << "\nPlease enter a year. ";
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

    cout << "Please enter a day. ";
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

bool IsLastDayInMonth(stDate Date)
{
    return Date.Day == NumberOfDaysInAMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(short Month)
{
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date)
{
      
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    
    return Date;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

int main()
{
    stDate Date = ReadFullDate();
    Date = IncreaseDateByOneDay(Date);

    printf("\nDate after adding one day is : %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

}
