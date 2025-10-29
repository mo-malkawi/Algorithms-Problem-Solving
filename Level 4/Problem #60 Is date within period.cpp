#include <iostream>
#include "DateTimeLib.h"

bool IsDateWithinPeriod(stPeriod Period, stDate DateToCheck)
{
    return !(IsDate::CompareDates(DateToCheck, Period.StartDate) == enDateCompare::Before
        || IsDate::CompareDates(DateToCheck, Period.EndDate) == enDateCompare::After);
}

int main()
{
    cout << "Enter Period :\n";
    stPeriod Period = Input::ReadPeriod();

    cout << "\nEnter date to check :\n";
    stDate DateToCheck = Input::ReadFullDate();

    if (IsDateWithinPeriod(Period, DateToCheck))
        cout << "\nYes, date is within period.";
    else
        cout << "\nNo, date is out of the period.";

}
