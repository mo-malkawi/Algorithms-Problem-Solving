#pragma warning(disable:4996)
#include <iostream>
#include <ctime>
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

    cout << "Please enter your date of birth:\n";

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

bool IsDate1EqualToDate2(stDate Date1, stDate Date2)
{
    return ((Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day)) ? true : false;
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

int DifferenceBetweenDates(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
    int NumberOfDays = 0;

    while (!IsDate1EqualToDate2(Date1, Date2))
    {
        Date1 = IncreaseDateByOneDay(Date1);
        NumberOfDays++;
    }

    return IncludeEndDay ? ++NumberOfDays : NumberOfDays;
}

stDate GetSystemDate()
{
    stDate Date;

    time_t t = time(0);
    tm* now = localtime(&t);

    Date.Year = now->tm_year+1900;
    Date.Month = now->tm_mon + 1;
    Date.Day = now->tm_mday;

    return Date;

}

int main()
{
    stDate Date1 = ReadFullDate();
    stDate Date2 = GetSystemDate();

    printf("\nYour age is : %d Day(s).\n", DifferenceBetweenDates(Date1, Date2));


}