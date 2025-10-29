#include <iostream>
#include "DateTimeLib.h"

stDate IncreaseDateByXDays(stDate Date , short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = FixDate::IncreaseDateByOneDay(Date);
    }

    return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = FixDate::IncreaseDateByOneDay(Date);
    }
    return Date;
}

stDate IncreaseDateByXWeeks(stDate Date , short Weeks)
{
   
    for (short i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }

    return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
    
    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

    short NumberOfDaysInCurrentMonth = FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month);

    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;

}

stDate IncreaseDateByXMonths(stDate Date, short Months)
{
    for (short i = 0; i < Months; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
    Date.Year++;
        return Date;
}

stDate IncreaseDateByXYears(stDate Date ,short Years)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }

    return Date;
}

stDate IncreaseDateByXYearsFaster(stDate Date, short Years)
{
    Date.Year += Years;
    return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
	Date.Year += 10;
    return Date;
}

stDate IncreaseDateByXDecades(stDate Date, short Decades)
{
    for (short i = 0; i < Decades; i++)
    {
        Date = IncreaseDateByOneDecade(Date);
    }
    return Date;
}

stDate IncreaseDateByXDecadesFaster(stDate Date , short Decades)
{
    Date.Year += Decades * 10;
    return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{
    Date.Year += 100;
    return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{
    Date.Year += 1000;
    return Date;
}

int main()
{
    stDate Date = Input::ReadFullDate();

    cout << "\nDate after:\n";

    Date = FixDate::IncreaseDateByOneDay(Date);
    printf("\n01-Adding one day is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXDays(Date, 10);
    printf("02-Adding 10 days is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneWeek(Date);
    printf("03-Adding one week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXWeeks(Date, 10);
    printf("04-Adding 10 weeks is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneMonth(Date);
    printf("05-Adding one month is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXMonths(Date,5);
    printf("06-Adding 5 months is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneYear(Date);
    printf("07-Adding one year is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXYears(Date, 10);
    printf("08-Adding 10 years is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXYearsFaster(Date, 10);
    printf("09-Adding 10 years (Faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneDecade(Date);
    printf("10-Adding one decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXDecades(Date,10);
    printf("11-Adding 10 decades is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByXDecadesFaster(Date, 10);
    printf("12-Adding 10 decades (Faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneCentury(Date);
    printf("13-Adding one century is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

    Date = IncreaseDateByOneMillennium(Date);
    printf("14-Adding one Millennium is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
}

