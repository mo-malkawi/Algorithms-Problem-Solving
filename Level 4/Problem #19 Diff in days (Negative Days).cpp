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

bool IsDate1BeforeThanDate2(stDate Date1, stDate Date2)
{

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ?
        ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ?
            Date1.Day < Date2.Day : false)) : false);

}

bool IsDate1EqualToDate2(stDate Date1, stDate Date2)
{
    return ((Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day)) ? true : false;
}

void SwapDates(stDate& Date1, stDate& Date2)
{
    stDate Temp;

    Temp.Year = Date1.Year;
    Temp.Month = Date1.Month;
    Temp.Day = Date1.Day;

    Date1.Year = Date2.Year;
    Date1.Month = Date2.Month;
    Date1.Day = Date2.Day;

    Date2.Year = Temp.Year;
    Date2.Month = Temp.Month;
    Date2.Day = Temp.Day;
}

int DifferenceBetweenDates(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
    int Days = 0;
    short SwapFlagValue = 1;

    if (!IsDate1BeforeThanDate2(Date1, Date2))
    {
        SwapDates(Date1, Date2);
        SwapFlagValue = -1;
    }

    
        while (IsDate1BeforeThanDate2(Date1, Date2))
        {
            Date1 = IncreaseDateByOneDay(Date1);
            Days++;
        }

        return IncludeEndDay ? ++Days * SwapFlagValue : Days * SwapFlagValue;
    
}

int main()
{
    stDate Date1 = ReadFullDate();
    stDate Date2 = ReadFullDate();


    printf("\nDifference is : %d Days(s).", DifferenceBetweenDates(Date1, Date2));
    printf("\nDifference (including end day) is : %d Days(s).\n", DifferenceBetweenDates(Date1, Date2, true));


}