#include <iostream>
#include "DateTimeLib.h"

bool IsWeekend(short DayOrder)
{
    return (DayOrder == 5 || DayOrder == 6) ? true : false;
}

bool IsWorkDay(short DayOrder)
{
    return !IsWeekend(DayOrder);
}

short CalculateVacationDays(stDate DateFrom, stDate DateTo)
{
    short DaysCount = 0;
    while (IsDate::IsDate1BeforeDate2(DateFrom, DateTo))
    {
        if (IsWorkDay(FixDate::DayOfWeekOrder(DateFrom)))
            DaysCount++;

        DateFrom = FixDate::IncreaseDateByOneDay(DateFrom);
    }

    return DaysCount;
}

int main()
{
    cout << "Vacation Starts:";
    stDate VacationStart = Input::ReadFullDate();

    cout << "\nVacation Ends:";
    stDate VacationEnd = Input::ReadFullDate();

    
    string DayNameStart = FixDate::DayShortName(FixDate::DayOfWeekOrder(VacationStart));
    string DayNameEnd = FixDate::DayShortName(FixDate::DayOfWeekOrder(VacationEnd));


    printf("\nVacation From: %s , %d/%d/%d\n", DayNameStart.c_str(), VacationStart.Day,
        VacationStart.Month, VacationStart.Year);

    printf("Vacation To: %s , %d/%d/%d\n", DayNameEnd.c_str(), VacationEnd.Day,
        VacationEnd.Month, VacationEnd.Year);

    cout << "\nActual vacation days: " << CalculateVacationDays(VacationStart, VacationEnd);

    system("pause>0");

}
