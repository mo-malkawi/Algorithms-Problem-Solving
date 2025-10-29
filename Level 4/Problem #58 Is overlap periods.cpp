#include <iostream>
#include "DateTimeLib.h"

struct stPeriod
{
    stDate StartDate;
    stDate EndDate;
};

stPeriod ReadPeriod()
{
    stPeriod Period;

    cout << "Enter start date:\n";
    Period.StartDate = Input::ReadFullDate();

    cout << "\nEnter end date:\n";
    Period.EndDate = Input::ReadFullDate();

    return Period;


}

bool DoPeriodsOverLap(stPeriod Period1 , stPeriod Period2)
{
    if (IsDate::CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before
        || IsDate::CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
        return false;

    return true;
}

int main()
{
    cout << "Enter period 1:\n";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter period 2:\n";
    stPeriod Period2 = ReadPeriod();

    if (DoPeriodsOverLap(Period1, Period2))
        cout << "\nYes, Periods overlap";
    else
        cout << "\nNo, Periods don't overlap";
}