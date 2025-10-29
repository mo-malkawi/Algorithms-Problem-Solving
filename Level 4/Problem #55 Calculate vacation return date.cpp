#include <iostream>
#include "DateTimeLib.h"

short ReadVacationDays()
{
    short Days = 0;

    cout << "\nPlease enter vacation days. ";
    cin >> Days;

    return Days;
}

stDate DateAfterVacation(stDate DateFrom , short VacationDays)
{
    
    while(VacationDays>0)
    {
        if (IsDate::IsWorkDay(DateFrom))
        {
            VacationDays--;
        }
        DateFrom = FixDate::IncreaseDateByOneDay(DateFrom);
    }

    return DateFrom;

}

int main()
{
    cout << "Vacation Starts:";
    stDate VacationStart = Input::ReadFullDate();

    stDate VacationEnd = DateAfterVacation(VacationStart, ReadVacationDays());

    string DayName = FixDate::DayShortName(FixDate::DayOfWeekOrder(VacationEnd));

    printf("\nReturn Date: %s , %d/%d/%d",DayName.c_str(),VacationEnd.Day,VacationEnd.Month,VacationEnd.Year );

    system("pause>0");

}
