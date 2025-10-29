#include <iostream>
#include "DateTimeLib.h"

short DayOfWeekOrder(stDate Date)
{
    return FixDate::DayOfWeekOrder(Date.Year,Date.Month,Date.Day);
}

bool IsEndOfWeek(short DayOrder)
{
    return DayOrder == 6 ;
}

bool IsWeekend(short DayOrder)
{
    return (DayOrder == 5 || DayOrder == 6) ? true : false;
}

bool IsWorkDay(short DayOrder)
{
    return !IsWeekend(DayOrder);
}

short DaysUntilTheEndOfWeek(short DayOrder)
{
    return 6 - DayOrder;
}

short DaysUntilTheEndOfMonth(stDate Date)
{
    return FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month) - Date.Day;
}

short DaysUntilTheEndOfYear(stDate Date)
{
    short DaysTillTheEndOfTheYear = FixDate::NumberOfDaysInAMonth(Date.Year, Date.Month) - Date.Day;

    for (short i = Date.Month+1; i <= 12; i++)
    {
        DaysTillTheEndOfTheYear += FixDate::NumberOfDaysInAMonth(Date.Year, i);
    }

    return DaysTillTheEndOfTheYear;
}

int main()
{
    stDate Date = FixDate::GetSystemDate();

    short DayOrderInTheWeek = DayOfWeekOrder(Date);
    string DayName = FixDate::DayShortName(DayOrderInTheWeek);

    printf("Today is %s , %d/%d/%d\n",DayName.c_str(), Date.Day, Date.Month, Date.Year);

    //The end of the week
    cout << "\nIs it the end of the week?\n";
    if (IsEndOfWeek(DayOrderInTheWeek))
        cout << "Yes it's saturday, it's the end of the week.\n";
    else
        cout << "No it is NOT the end of the week.\n";

    //The Weekend
    cout << "\nIs it the Weekend?\n";
    if (IsWeekend(DayOrderInTheWeek))
        cout << "Yes it is the weekend.\n";
    else
        printf("No, today is %s, NOT a weekend.\n",FixDate::DayShortName(DayOrderInTheWeek).c_str());

    //Work Day
    cout << "\nIs it work day?\n";
    if (IsWorkDay(DayOrderInTheWeek))
        cout << "Yes it is a work day.\n";
    else
        cout << "NO it is NOT a work day.\n";

    printf("\nDays until end of the week : %d Day(s).", DaysUntilTheEndOfWeek(DayOrderInTheWeek));
    printf("\nDays until the end of the month : %d Day(s).", DaysUntilTheEndOfMonth(Date));
    printf("\nDays until the end of the year : %d Day(s).", DaysUntilTheEndOfYear(Date));

    system("pause>0");

}
