#include <iostream>
#include "DateTimeLib.h"

bool IsFirstDayInMonth(short Day)
{
    return Day == 1;
}

bool IsFirstMonthInYear(short Month)
{
    return Month == 1;
}

void FebFix(stDate Date)
{
    if (Date.Month == 2 && Date.Day == 29 && !IsDate::IsLeapYear(Date.Year))
    {
        Date.Day = 28;
    }
}

stDate DecreaseDateByOneDay(stDate Date)
{
    if (IsFirstDayInMonth(Date.Day))
    {
        if (IsFirstMonthInYear(Date.Month))
        {
            Date.Month = 12;
            Date.Year--;
        }
        else
        {
            Date.Month--;
        }
        Date.Day = FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month);
    }
    else
    {
        Date.Day--;
    }
    return Date;
}

stDate DecreaseDateByXDays(stDate Date , short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date =DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateByXWeeks(stDate Date ,short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = DecreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
    if (IsFirstMonthInYear(Date.Month))
    {
        Date.Month = 12;
    }
    else
    {
        Date.Month--;
    }

    short NumberOfDaysInCurrentMonth = FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month);

    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;
}

stDate DecreaseDateByXMonths(stDate Date ,short Months)
{
    for (short i = 1; i <= Months; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
    
    Date.Year--;
    FebFix(Date);

    return Date;
}

stDate DecreaseDateByXYears(stDate Date , short Years)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}

stDate DecreaseDateByXYearsFaster(stDate Date, short Years)
{
    Date.Year -= Years;
    FebFix(Date);

    return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{
    Date.Year -= 10;
    FebFix(Date);

    return Date;

}

stDate DecreaseDateByXDecades(stDate Date,short Decades)
{
    for (short i = 1; i <= Decades; i++)
    {
        Date = DecreaseDateByOneDecade(Date);
    }
    return Date;
}

stDate DecreaseDateByXDecadesFaster(stDate Date , short Decades)
{
    Date.Year -= Decades * 10;
    FebFix(Date);
    return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
    Date.Year -= 100;
    FebFix(Date);
    
    return Date;
}

stDate DecreaseDateByOneMillenium(stDate Date)
{
    Date.Year -= 1000;
    FebFix(Date);

    return Date;
}

int main()
{
    stDate Date;

    Date = Input::ReadFullDate();

    cout << "\nDate after:\n";

    Date = DecreaseDateByOneDay(Date);
    printf("\n01-Substracting one day is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXDays(Date, 10);
    printf("\n02-Substracting 10 days is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneWeek(Date);
    printf("\n03-Substracting one week is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXWeeks(Date, 10);
    printf("\n04-Substracting 10 weeks is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneMonth(Date);
    printf("\n05-Substracting one month is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXMonths(Date, 5);
    printf("\n06-Substracting 5 months is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneYear(Date);
    printf("\n07-Substracting one year is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXYears(Date, 10);
    printf("\n08-Substracting 10 years is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXYearsFaster(Date, 10);
    printf("\n09-Substracting 10 years (Faster) is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneDecade(Date);
    printf("\n10-Substracting one decade is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXDecades(Date,10);
    printf("\n11-Substracting 10 decades is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByXDecadesFaster(Date, 10);
    printf("\n12-Substracting 10 decades (Faster) is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneCentury(Date);
    printf("\n13-Substracting one century is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    Date = DecreaseDateByOneMillenium(Date);
    printf("\n14-Substracting one millenium is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

    system("pause>0");
}
