#include <iostream>
#include "DateTimeLib.h"

short PeriodLengthInDays(stPeriod Period , bool IncludeEndDate = false)
{
    return FixDate::DifferenceBetweenDates(Period.StartDate, Period.EndDate,IncludeEndDate);
}

int main()
{
    cout << "Enter Period:\n";
    stPeriod Period = Input::ReadPeriod();

    cout << "\nPeriod length is: " << PeriodLengthInDays(Period) << endl;
    cout << "\nPeriod length (Including end date) is: " << PeriodLengthInDays(Period,true) << endl;

}
